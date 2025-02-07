#include "GammaComboEngine.h"
#include "TFile.h"
#include "RooGaussian.h"
#include "RooExponential.h"
#include "RooWorkspace.h"
#include "Helpers.h"
// #include "PDF_DatasetTutorial.h"

argumentHolder argumentParser(argumentHolder arguments, int argC, char** argV);

int main(int argc, char** argv)
{
    //////////////////////////////////////////////////////////////
    //
    // When working with datasets, the gammacombo framework relies on a workspace
    // as the main reference for data and the statistical model.
    // Therefore, we first must construct the workspace that contains all necessary information.
    // In this tutorial, this is done by calling the command tutorial_dataset_build_workspace
    // In a more complex analysis, you can also do this elsewhere, for example using pyroot.
    //
    ///////////////////////////////////////////////////////////////

    // How to run the tutorial:
    // bin/tutorial_dataset_build_workspace

    // 1.) Running a Profile Likelihood Scan
    //        bin/b2pimue_limits --var branchingRatio --npoints 50 --scanrange 0.:1.e-7  --CL 90 --CL 95
    // 2.) If you want to just remake the plot (without rescanning) add the -a plot option
    //        bin/b2pimue_limits --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 -a plot --CL 90 --CL 95
    // 3.) If you want to add the CLs method add the option --cls 1
    //        bin/b2pimue_limits --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 --cls 1 --CL 90 --CL 95
    // 4.) To do a Feldman Cousins plugin scan (run a bunch in parallel and give them different names with --nrun %d
    //        bin/b2pimue_limits -a pluginbatch --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 --ntoys 100 --nrun 1
    //        bin/b2pimue_limits -a pluginbatch --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 --ntoys 100 --nrun 2
    //        bin/b2pimue_limits -a pluginbatch --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 --ntoys 100 --nrun 3
    //        bin/b2pimue_limits -a pluginbatch --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 --ntoys 100 --nrun 4
    //        bin/b2pimue_limits -a pluginbatch --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 --ntoys 100 --nrun 5
    // 5.) To read a bunch of Feldman Cousins scans back in (use the -j option to label the different run numbers)
    //        bin/b2pimue_limits -a plugin --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 -j 1-5
    // 6.) To just plot the Feldman Cousins stuff without having to re-scan or re-read add the -a plot option again
    //        bin/b2pimue_limits -a plugin --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 -j 1-5 -a plot
    // 7.) To do the full toy-based CLs method and plot the expected values as well) use the --cls 2 option (note you can pass --cls multiple times)
    //        bin/b2pimue_limits -a plugin --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 -j 1-5 -a plot --cls 1 --cls 2 --CL 90 --CL 95
    // 8.) There are various ways of prettyfying your plots - for CLs stuff you can try adding --qh 23 (moves the CL label) --group LHCb (adds LHCb label) --prelim (add preliminary label)
    //        bin/b2pimue_limits -a plugin --var branchingRatio --npoints 50 --scanrange 0.:1.e-7 -j 1-5 -a plot --cls 1 --cls 2 --qh 23 --group LHCb --prelim
    //
    // See also the Snakefile in the tutorial top directory for an example workflow
    // If you have any problems contact Matthew Kenzie (matthew.kenzie@cern.ch) or Titus Mombächer (titus.mombacher@cern.ch)

    //////////////////////////////////////
    //=====Parse additional options=====//
    //////////////////////////////////////
    argumentHolder arguments = argumentHolder();
    argumentHolder args = argumentParser(arguments, argc, argv);

    // Load the workspace from its file
    TFile f(args.workspaceName.c_str());
    RooWorkspace* workspace = (RooWorkspace*)f.Get("dataset_workspace");
    if (workspace == nullptr){
        std::cout<<"No workspace found:"<<std::endl;
        std::cout<<"This tutorial requires a .root file containting a special workspace before running it."<<std::endl;
        std::cout<<"You can create the workspace by calling the tutorial_dataset_build_workspace command. "<<std::endl;
        std::cout<<"The corresponding code can be found in tutorial_dataset_build_workspace.cpp"<<std::endl;
    }

      // You can make any changes to your workspace on the fly here
      workspace->var("branchingRatio")->SetTitle("#font[32]{B}( B^{#pm} #rightarrow #pi^{#pm} #mu^{#pm} e^{#mp} )");
      // workspace->var("branchingRatio")->setVal(1.e-8);
      // workspace->var("branchingRatio")->setRange(-1.e-10,2.5e-6);
      // workspace->var("n_bkg")->SetTitle("N_{bkg}");
      // workspace->var("n_bkg")->setVal(5000);
      // workspace->var("n_bkg")->setRange(4000,6000);

    // Construct the PDF and pass the workspace to it
    //    note that you can write your own PDF_DatasetsTutorial Class which defines your own fitting procedure etc.
    //    this should inherit from PDF_Datasets

    PDF_Datasets* pdf = new PDF_Datasets(workspace);
    // PDF_Datasets* pdf = new PDF_DatasetTutorial(workspace); // put your inherited fitter if you want to
    // pdf->setTitle("datasets_combiner"); // give a meaningful title if you want to, default is "PDF_Dataset"
    // pdf->setName("datasets_combiner"); // give a meaningful name if you want to (will enter file names as well), default is "PDF_Dataset"
    pdf->initData("data"); // this is the name of the dataset in the workspace
    pdf->initPDF("simultanious_pdf"); // this the name of the pdf in the workspace (without the constraints)
    // pdf->initBkgPDF("simultanious_bkg_only_pdf"); // optional: this the name of the background pdf in the workspace (without the constraints)
    // If the above line is commented, the tool will assume the BkgPDF to be the PDF with scanVar=0 (most often true)
    pdf->initObservables("datasetObservables"); // non-global observables whose measurements are stored in the dataset (for example the mass).
    pdf->initGlobalObservables("global_observables_set"); // global observables
    pdf->initParameters("parameters"); // all parameters
    pdf->initConstraints("constraint_set"); // RooArgSet containing the "constraint" PDF's
    // the below are optional (will not affect the results but just make some plots for you)
    pdf->addFitObs("B_M");                         // this is not required but will make some sanity plots
    // pdf->unblind("mass","[4360:5260],[5460:6360]"); // have to be a bit careful about staying blind (this code isn't yet really blind friendly)
    // pdf->unblind("B_M", "[4500:6000]" );

    // pdf->printParameters();

    // Start the Gammacombo Engine
    GammaComboEngine gc("tutorial_dataset", args.argc, args.argv.data());

    // set run on dataset option
    gc.setRunOnDataSet(true);

    // set the PDF
    gc.setPdf(pdf);

    // Combiners are not supported when working with datsets.
    // The statistical model is fully defined with the PDF
    // In some other use cases you will see lines like
    // gc.newCombiner(1, "Combiner Name", "Combiner Title", 2,3,4 );
    // these have no meaning in the datasets case

    // now run it
    gc.run();
}

argumentHolder argumentParser(argumentHolder arguments, int argC, char** argV){
    //argumentHolder arguments = argumentHolder();

    std::vector<char*> argvTmp;

    int count=0;
    for(int i=0; i<argC; i++){
      if(std::string(argV[i]) == "--work" || std::string(argV[i]) == "--workspace"){
          arguments.workspaceName=std::string(argV[i+1]);
          count+=2;
          i++;
      }
      else if(std::string(argV[i]) == "--seed"){
          arguments.seed=std::atoi(argV[i+1]);
          count+=2;
          i++;
      }
      else if(std::string(argV[i]) == "--tag"){
          arguments.tag = std::atoi(argV[i+1]);
          count+=2;
          i++;
      }
      argvTmp.emplace_back(argV[i]); 
    }

    int argcNew = argC-count;
    arguments.argc=argcNew;
    arguments.argv=argvTmp;//.data();

    return arguments;
};
