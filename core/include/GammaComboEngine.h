/**
 * Gamma Combination
 * Author: Till Moritz Karbach, moritz.karbach@cern.ch
 * Date: Aug 2014
 *
 **/

#ifndef GammaComboEngine_h
#define GammaComboEngine_h

#include "BatchScriptWriter.h"
#include "Combiner.h"
#include "FileNameBuilder.h"
#include "MethodBergerBoosScan.h"
#include "MethodCoverageScan.h"
#include "MethodPluginScan.h"
#include "MethodProbScan.h"
#include "OneMinusClPlotAbs.h"
#include "OptParser.h"
#include "PDF_Abs.h"
#include "ParameterCache.h"

#include <TApplication.h>
#include <TStopwatch.h>

#include <memory>

///
/// The main GammaCombo scanning engine, controlling
/// the application.
///

class GammaComboEngine {
 public:
  GammaComboEngine(TString name, int argc, char* argv[]);
  GammaComboEngine(TString name, int argc, char* argv[], bool _runOnDataSet);

  void adjustRanges(Combiner* c, int cId);
  void setupToyVariationSets(Combiner* c, int cId);
  void addPdf(int id, PDF_Abs* pdf, TString title = "");
  void addSubsetPdf(int id, PDF_Abs* pdf, std::vector<int>& indices, TString title = "");

  /**
   * This method is deprecated and is maintained only for legacy reasons.
   *
   * Add a pdf with a subset of the observables to the GammaComboEngine.
   */
  template <typename... Args>
  void addSubsetPdf(const int id, PDF_Abs* pdf, const int index, const Args... args, const TString title = "") {
    std::vector<int> indices = {index};
    addSubsetPdf(id, pdf, indices, args..., title);
  }

  void setPdf(PDF_Abs* pdf);
  void addCombiner(int id, Combiner* cmb);
  void cloneCombiner(int newId, int oldId, TString name, TString title);
  Combiner* getCombiner(int id) const;
  PDF_Abs* getPdf(int id) const;
  inline OptParser* getArg() const { return arg.get(); };

  void newCombiner(const int id, const TString name, const TString title, const std::vector<int>& pdfIds = {});

  /**
   * This method is deprecated and is maintained only for legacy reasons.
   *
   * Add a new Combiner, consisting of the specified PDFs. The pdf arguments refer to the GammaComboEngine ID of the
   * PDFs that should be combined (add them before using `addPdf()`).
   */
  template <typename... Args>
  void newCombiner(const int id, const TString name, const TString title, const int pdfId, const Args... args) {
    std::vector<int> pdfIds = {pdfId};
    newCombiner(id, name, title, pdfIds, args...);
  }

  void print() const;
  void printPdfs() const;
  void printCombinations() const;
  void run();
  void runApplication();
  void scanStrategy1d(MethodProbScan* scanner, ParameterCache* pCache);
  void scanStrategy2d(MethodProbScan* scanner, ParameterCache* pCache);
  inline void setRunOnDataSet(bool opt) { runOnDataSet = opt; };
  PDF_Abs* operator[](int idx);

 private:
  // Helper function.
  void addSubsetPdf(const int id, PDF_Abs* pdf, const std::vector<int> indices, const int index, const TString title);

  // Helper function.
  template <typename... Args>
  void addSubsetPdf(const int id, PDF_Abs* pdf, const std::vector<int> indices, const int index, const Args... args,
                    const TString title) {
    auto v = indices;
    v.push_back(index);
    addSubsetPdf(id, pdf, v, args..., title);
  }

  void makeAddDelCombinations();
  void checkAsimovArg() const;
  void checkColorArg() const;
  void checkCombinationArg() const;
  void configureAsimovCombinerNames(Combiner* c, int i);
  bool combinerExists(int id) const;
  void compareCombinations();
  void customizeCombinerTitles();
  void defineColors();
  void disableSystematics();
  void fixParameters(Combiner* c, int cId);
  TString getStartParFileName(int cId) const;
  bool isScanVarObservable(Combiner* c, TString scanVar) const;
  void loadStartParameters(MethodProbScan* s, ParameterCache* pCache, int cId);
  void make1dPluginOnlyPlot(MethodPluginScan* sPlugin, int cId);
  void make1dPluginPlot(MethodPluginScan* sPlugin, MethodProbScan* sProb, int cId);
  void make1dPluginScan(MethodPluginScan* scannerPlugin, int cId);
  void make1dProbPlot(MethodProbScan* scanner, int cId);
  void make1dProbScan(MethodProbScan* scanner, int cId);
  void make1dCoverageScan(MethodCoverageScan* scanner, int cId);
  void make1dCoveragePlot(MethodCoverageScan* scanner, int cId);
  void make1dBergerBoosScan(MethodBergerBoosScan* scanner, int cId);
  void make2dPluginOnlyPlot(MethodPluginScan* sPlugin, int cId);
  void make2dPluginPlot(MethodPluginScan* sPlugin, MethodProbScan* sProb, int cId);
  void make2dPluginScan(MethodPluginScan* scannerPlugin, int cId);
  void make2dProbPlot(MethodProbScan* scanner, int cId);
  void make2dProbScan(MethodProbScan* scanner, int cId);

  // Helper function.
  void newCombiner(const int id, const TString name, const TString title, const std::vector<int>& pdfIds,
                   const int pdfId);

  // Helper function.
  template <typename... Args>
  void newCombiner(const int id, const TString name, const TString title, const std::vector<int>& pdfIds,
                   const int pdfId, const Args... args) {
    auto v = pdfIds;
    v.push_back(pdfId);
    newCombiner(id, name, title, v, args...);
  }

  void printCombinerStructure(Combiner* c) const;
  void printBanner() const;
  bool pdfExists(int id) const;
  void savePlot() const;
  void scaleStatErrors();
  void scaleStatAndSystErrors();
  void scaleDownErrors();  // now defunct
  void scan();
  void scanDataSet();
  void setAsimovObservables(Combiner* c);
  void setObservablesFromFile(Combiner* c, int cId);
  void loadAsimovPoint(Combiner* c, int cId);
  void setUpPlot();
  void tightenChi2Constraint(Combiner* c, TString scanVar);
  void usage() const;
  void writebatchscripts();
  void makeLatex(Combiner* c) const;
  void saveWorkspace(Combiner* c, int i);
  void runToys(Combiner* c);

  std::unique_ptr<OptParser> arg;
  std::vector<Combiner*> cmb;
  std::vector<int> colorsLine;
  std::vector<int> colorsText;
  std::vector<int> fillStyles;
  std::vector<int> fillColors;
  std::vector<float> fillTransparencies;
  std::vector<int> lineColors;
  std::vector<int> lineStyles;
  std::vector<int> lineWidths;
  std::vector<MethodProbScan*> comparisonScanners;
  TString execname;
  std::unique_ptr<FileNameBuilder> m_fnamebuilder;
  std::unique_ptr<BatchScriptWriter> m_batchscriptwriter;
  std::vector<PDF_Abs*> pdf;
  OneMinusClPlotAbs* plot = nullptr;
  TStopwatch t;
  TApplication* theApp = nullptr;
  bool runOnDataSet = false;
};

#endif
