void tutorial_dataset_branchingRatio_cls()
{
//=========Macro generated from canvas: tutorial_dataset_branchingRatio_clsUID1/p-value curves
//=========  (Mon Dec 23 20:26:54 2024) by ROOT version 6.20/04
   TCanvas *tutorial_dataset_branchingRatio_clsUID1 = new TCanvas("tutorial_dataset_branchingRatio_clsUID1", "p-value curves",0,0,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   tutorial_dataset_branchingRatio_clsUID1->SetHighLightColor(2);
   tutorial_dataset_branchingRatio_clsUID1->Range(-2.162162e-07,-0.2833333,1.135135e-06,1.383333);
   tutorial_dataset_branchingRatio_clsUID1->SetFillColor(0);
   tutorial_dataset_branchingRatio_clsUID1->SetBorderMode(0);
   tutorial_dataset_branchingRatio_clsUID1->SetBorderSize(2);
   tutorial_dataset_branchingRatio_clsUID1->SetLeftMargin(0.16);
   tutorial_dataset_branchingRatio_clsUID1->SetTopMargin(0.05);
   tutorial_dataset_branchingRatio_clsUID1->SetBottomMargin(0.17);
   tutorial_dataset_branchingRatio_clsUID1->SetFrameBorderMode(0);
   tutorial_dataset_branchingRatio_clsUID1->SetFrameBorderMode(0);
   
   Double_t UID5_fx3[55] = {
   -1e-08,
   -1e-08,
   2.000001e-10,
   2.06e-08,
   4.1e-08,
   6.14e-08,
   8.18e-08,
   1.022e-07,
   1.028128e-07,
   1.226e-07,
   1.43e-07,
   1.634e-07,
   1.838e-07,
   2.042e-07,
   2.246e-07,
   2.45e-07,
   2.654e-07,
   2.858e-07,
   3.062e-07,
   3.266e-07,
   3.47e-07,
   3.674e-07,
   3.878e-07,
   4.082e-07,
   4.286e-07,
   4.49e-07,
   4.694e-07,
   4.898e-07,
   5.102e-07,
   5.306e-07,
   5.51e-07,
   5.714e-07,
   5.918e-07,
   6.122e-07,
   6.326e-07,
   6.53e-07,
   6.734e-07,
   6.938e-07,
   7.142e-07,
   7.346e-07,
   7.55e-07,
   7.754e-07,
   7.958e-07,
   8.162e-07,
   8.366e-07,
   8.57e-07,
   8.774e-07,
   8.978e-07,
   9.182e-07,
   9.386e-07,
   9.59e-07,
   9.794001e-07,
   9.998e-07,
   1.01e-06,
   1.01e-06};
   Double_t UID5_fy3[55] = {
   0,
   0.9974687,
   0.9974687,
   0.9837641,
   0.9702908,
   0.9660376,
   0.9751762,
   1,
   1,
   0.9583914,
   0.8906304,
   0.8025093,
   0.7024693,
   0.5995724,
   0.5009255,
   0.4109132,
   0.3316804,
   0.2638008,
   0.2068937,
   0.1600821,
   0.1222391,
   0.09213354,
   0.06856461,
   0.05038795,
   0.03657765,
   0.02623323,
   0.01859372,
   0.01302657,
   0.009023463,
   0.006181451,
   0.00418884,
   0.002808576,
   0.001863746,
   0.001224273,
   0.0007963156,
   0.0005129892,
   0.0003273682,
   0.0002070018,
   0.0001297219,
   8.058629e-05,
   4.963777e-05,
   3.032044e-05,
   1.837133e-05,
   1.104361e-05,
   6.587459e-06,
   3.899829e-06,
   2.291883e-06,
   1.337263e-06,
   7.748261e-07,
   4.45875e-07,
   2.548762e-07,
   1.447476e-07,
   8.168298e-08,
   8.168298e-08,
   0};
   TGraph *graph = new TGraph(55,UID5_fx3,UID5_fy3);
   graph->SetName("UID5");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6666ff");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_haxesUID63 = new TH1F("Graph_haxesUID63","",100,0,1e-06);
   Graph_haxesUID63->SetMinimum(0);
   Graph_haxesUID63->SetMaximum(1.3);
   Graph_haxesUID63->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_haxesUID63->SetLineColor(ci);
   Graph_haxesUID63->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   Graph_haxesUID63->GetXaxis()->SetNdivisions(407);
   Graph_haxesUID63->GetXaxis()->SetLabelFont(133);
   Graph_haxesUID63->GetXaxis()->SetLabelSize(35);
   Graph_haxesUID63->GetXaxis()->SetTitleSize(45);
   Graph_haxesUID63->GetXaxis()->SetTitleOffset(0.9);
   Graph_haxesUID63->GetXaxis()->SetTitleFont(133);
   Graph_haxesUID63->GetYaxis()->SetTitle("1#minusCL");
   Graph_haxesUID63->GetYaxis()->SetNdivisions(407);
   Graph_haxesUID63->GetYaxis()->SetLabelFont(133);
   Graph_haxesUID63->GetYaxis()->SetLabelOffset(0.01);
   Graph_haxesUID63->GetYaxis()->SetLabelSize(35);
   Graph_haxesUID63->GetYaxis()->SetTitleSize(45);
   Graph_haxesUID63->GetYaxis()->SetTitleOffset(0.95);
   Graph_haxesUID63->GetYaxis()->SetTitleFont(133);
   Graph_haxesUID63->GetZaxis()->SetLabelFont(42);
   Graph_haxesUID63->GetZaxis()->SetTitleOffset(1);
   Graph_haxesUID63->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_haxesUID63);
   
   graph->Draw(" f a");
   
   TH1F *haxesUID10__3 = new TH1F("haxesUID10__3","",100,0,1e-06);
   haxesUID10__3->SetMinimum(0);
   haxesUID10__3->SetMaximum(1.3);
   haxesUID10__3->SetStats(0);

   ci = TColor::GetColor("#000099");
   haxesUID10__3->SetLineColor(ci);
   haxesUID10__3->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   haxesUID10__3->GetXaxis()->SetNdivisions(407);
   haxesUID10__3->GetXaxis()->SetLabelFont(133);
   haxesUID10__3->GetXaxis()->SetLabelSize(35);
   haxesUID10__3->GetXaxis()->SetTitleSize(45);
   haxesUID10__3->GetXaxis()->SetTitleOffset(0.9);
   haxesUID10__3->GetXaxis()->SetTitleFont(133);
   haxesUID10__3->GetYaxis()->SetTitle("1#minusCL");
   haxesUID10__3->GetYaxis()->SetNdivisions(407);
   haxesUID10__3->GetYaxis()->SetLabelFont(133);
   haxesUID10__3->GetYaxis()->SetLabelOffset(0.01);
   haxesUID10__3->GetYaxis()->SetLabelSize(35);
   haxesUID10__3->GetYaxis()->SetTitleSize(45);
   haxesUID10__3->GetYaxis()->SetTitleOffset(0.95);
   haxesUID10__3->GetYaxis()->SetTitleFont(133);
   haxesUID10__3->GetZaxis()->SetLabelFont(42);
   haxesUID10__3->GetZaxis()->SetTitleOffset(1);
   haxesUID10__3->GetZaxis()->SetTitleFont(42);
   haxesUID10__3->Draw("axissame");
   
   Double_t UID9_fx4[55] = {
   -1e-08,
   -1e-08,
   2.000001e-10,
   2.06e-08,
   4.1e-08,
   6.14e-08,
   8.18e-08,
   1.022e-07,
   1.028128e-07,
   1.226e-07,
   1.43e-07,
   1.634e-07,
   1.838e-07,
   2.042e-07,
   2.246e-07,
   2.45e-07,
   2.654e-07,
   2.858e-07,
   3.062e-07,
   3.266e-07,
   3.47e-07,
   3.674e-07,
   3.878e-07,
   4.082e-07,
   4.286e-07,
   4.49e-07,
   4.694e-07,
   4.898e-07,
   5.102e-07,
   5.306e-07,
   5.51e-07,
   5.714e-07,
   5.918e-07,
   6.122e-07,
   6.326e-07,
   6.53e-07,
   6.734e-07,
   6.938e-07,
   7.142e-07,
   7.346e-07,
   7.55e-07,
   7.754e-07,
   7.958e-07,
   8.162e-07,
   8.366e-07,
   8.57e-07,
   8.774e-07,
   8.978e-07,
   9.182e-07,
   9.386e-07,
   9.59e-07,
   9.794001e-07,
   9.998e-07,
   1.01e-06,
   1.01e-06};
   Double_t UID9_fy4[55] = {
   0,
   0.4534999,
   0.4534999,
   0.5496692,
   0.6540222,
   0.7646868,
   0.8792718,
   1,
   1,
   0.8891998,
   0.7771089,
   0.6703848,
   0.5707242,
   0.4795001,
   0.3975586,
   0.3252514,
   0.2625871,
   0.2092248,
   0.1645391,
   0.1277345,
   0.09790649,
   0.0740982,
   0.05538858,
   0.04089798,
   0.02983754,
   0.02151173,
   0.01533078,
   0.01080153,
   0.007525949,
   0.005186505,
   0.003536131,
   0.002385688,
   0.001593093,
   0.001053128,
   0.0006893663,
   0.000446929,
   0.0002870289,
   0.0001826446,
   0.0001151769,
   7.199467e-05,
   4.461687e-05,
   2.741712e-05,
   1.670985e-05,
   1.010249e-05,
   6.059738e-06,
   3.606853e-06,
   2.130819e-06,
   1.249574e-06,
   7.275395e-07,
   4.206164e-07,
   2.415096e-07,
   1.377393e-07,
   7.804194e-08,
   7.804194e-08,
   0};
   graph = new TGraph(55,UID9_fx4,UID9_fy4);
   graph->SetName("UID9");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_haxesUID104 = new TH1F("Graph_haxesUID104","",100,0,1e-06);
   Graph_haxesUID104->SetMinimum(0);
   Graph_haxesUID104->SetMaximum(1.3);
   Graph_haxesUID104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_haxesUID104->SetLineColor(ci);
   Graph_haxesUID104->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   Graph_haxesUID104->GetXaxis()->SetNdivisions(407);
   Graph_haxesUID104->GetXaxis()->SetLabelFont(133);
   Graph_haxesUID104->GetXaxis()->SetLabelSize(35);
   Graph_haxesUID104->GetXaxis()->SetTitleSize(45);
   Graph_haxesUID104->GetXaxis()->SetTitleOffset(0.9);
   Graph_haxesUID104->GetXaxis()->SetTitleFont(133);
   Graph_haxesUID104->GetYaxis()->SetTitle("1#minusCL");
   Graph_haxesUID104->GetYaxis()->SetNdivisions(407);
   Graph_haxesUID104->GetYaxis()->SetLabelFont(133);
   Graph_haxesUID104->GetYaxis()->SetLabelOffset(0.01);
   Graph_haxesUID104->GetYaxis()->SetLabelSize(35);
   Graph_haxesUID104->GetYaxis()->SetTitleSize(45);
   Graph_haxesUID104->GetYaxis()->SetTitleOffset(0.95);
   Graph_haxesUID104->GetYaxis()->SetTitleFont(133);
   Graph_haxesUID104->GetZaxis()->SetLabelFont(42);
   Graph_haxesUID104->GetZaxis()->SetTitleOffset(1);
   Graph_haxesUID104->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_haxesUID104);
   
   graph->Draw(" f");
   
   TH1F *haxesUID15__4 = new TH1F("haxesUID15__4","",100,0,1e-06);
   haxesUID15__4->SetMinimum(0);
   haxesUID15__4->SetMaximum(1.3);
   haxesUID15__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   haxesUID15__4->SetLineColor(ci);
   haxesUID15__4->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   haxesUID15__4->GetXaxis()->SetNdivisions(407);
   haxesUID15__4->GetXaxis()->SetLabelFont(133);
   haxesUID15__4->GetXaxis()->SetLabelSize(35);
   haxesUID15__4->GetXaxis()->SetTitleSize(45);
   haxesUID15__4->GetXaxis()->SetTitleOffset(0.9);
   haxesUID15__4->GetXaxis()->SetTitleFont(133);
   haxesUID15__4->GetYaxis()->SetTitle("1#minusCL");
   haxesUID15__4->GetYaxis()->SetNdivisions(407);
   haxesUID15__4->GetYaxis()->SetLabelFont(133);
   haxesUID15__4->GetYaxis()->SetLabelOffset(0.01);
   haxesUID15__4->GetYaxis()->SetLabelSize(35);
   haxesUID15__4->GetYaxis()->SetTitleSize(45);
   haxesUID15__4->GetYaxis()->SetTitleOffset(0.95);
   haxesUID15__4->GetYaxis()->SetTitleFont(133);
   haxesUID15__4->GetZaxis()->SetLabelFont(42);
   haxesUID15__4->GetZaxis()->SetTitleOffset(1);
   haxesUID15__4->GetZaxis()->SetTitleFont(42);
   haxesUID15__4->Draw("axissame");
   
   Double_t UID14_fx5[55] = {
   -1e-08,
   -1e-08,
   2.000001e-10,
   2.06e-08,
   4.1e-08,
   6.14e-08,
   8.18e-08,
   1.022e-07,
   1.028128e-07,
   1.226e-07,
   1.43e-07,
   1.634e-07,
   1.838e-07,
   2.042e-07,
   2.246e-07,
   2.45e-07,
   2.654e-07,
   2.858e-07,
   3.062e-07,
   3.266e-07,
   3.47e-07,
   3.674e-07,
   3.878e-07,
   4.082e-07,
   4.286e-07,
   4.49e-07,
   4.694e-07,
   4.898e-07,
   5.102e-07,
   5.306e-07,
   5.51e-07,
   5.714e-07,
   5.918e-07,
   6.122e-07,
   6.326e-07,
   6.53e-07,
   6.734e-07,
   6.938e-07,
   7.142e-07,
   7.346e-07,
   7.55e-07,
   7.754e-07,
   7.958e-07,
   8.162e-07,
   8.366e-07,
   8.57e-07,
   8.774e-07,
   8.978e-07,
   9.182e-07,
   9.386e-07,
   9.59e-07,
   9.794001e-07,
   9.998e-07,
   1.01e-06,
   1.01e-06};
   Double_t UID14_fy5[55] = {
   0,
   0.9974687,
   0.9974687,
   0.9837641,
   0.9702908,
   0.9660376,
   0.9751762,
   1,
   1,
   0.9583914,
   0.8906304,
   0.8025093,
   0.7024693,
   0.5995724,
   0.5009255,
   0.4109132,
   0.3316804,
   0.2638008,
   0.2068937,
   0.1600821,
   0.1222391,
   0.09213354,
   0.06856461,
   0.05038795,
   0.03657765,
   0.02623323,
   0.01859372,
   0.01302657,
   0.009023463,
   0.006181451,
   0.00418884,
   0.002808576,
   0.001863746,
   0.001224273,
   0.0007963156,
   0.0005129892,
   0.0003273682,
   0.0002070018,
   0.0001297219,
   8.058629e-05,
   4.963777e-05,
   3.032044e-05,
   1.837133e-05,
   1.104361e-05,
   6.587459e-06,
   3.899829e-06,
   2.291883e-06,
   1.337263e-06,
   7.748261e-07,
   4.45875e-07,
   2.548762e-07,
   1.447476e-07,
   8.168298e-08,
   8.168298e-08,
   0};
   graph = new TGraph(55,UID14_fx5,UID14_fy5);
   graph->SetName("UID14");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_haxesUID155 = new TH1F("Graph_haxesUID155","",100,0,1e-06);
   Graph_haxesUID155->SetMinimum(0);
   Graph_haxesUID155->SetMaximum(1.3);
   Graph_haxesUID155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_haxesUID155->SetLineColor(ci);
   Graph_haxesUID155->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   Graph_haxesUID155->GetXaxis()->SetNdivisions(407);
   Graph_haxesUID155->GetXaxis()->SetLabelFont(133);
   Graph_haxesUID155->GetXaxis()->SetLabelSize(35);
   Graph_haxesUID155->GetXaxis()->SetTitleSize(45);
   Graph_haxesUID155->GetXaxis()->SetTitleOffset(0.9);
   Graph_haxesUID155->GetXaxis()->SetTitleFont(133);
   Graph_haxesUID155->GetYaxis()->SetTitle("1#minusCL");
   Graph_haxesUID155->GetYaxis()->SetNdivisions(407);
   Graph_haxesUID155->GetYaxis()->SetLabelFont(133);
   Graph_haxesUID155->GetYaxis()->SetLabelOffset(0.01);
   Graph_haxesUID155->GetYaxis()->SetLabelSize(35);
   Graph_haxesUID155->GetYaxis()->SetTitleSize(45);
   Graph_haxesUID155->GetYaxis()->SetTitleOffset(0.95);
   Graph_haxesUID155->GetYaxis()->SetTitleFont(133);
   Graph_haxesUID155->GetZaxis()->SetLabelFont(42);
   Graph_haxesUID155->GetZaxis()->SetTitleOffset(1);
   Graph_haxesUID155->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_haxesUID155);
   
   graph->Draw(" l");
   
   TH1F *haxesUID19__5 = new TH1F("haxesUID19__5","",100,0,1e-06);
   haxesUID19__5->SetMinimum(0);
   haxesUID19__5->SetMaximum(1.3);
   haxesUID19__5->SetStats(0);

   ci = TColor::GetColor("#000099");
   haxesUID19__5->SetLineColor(ci);
   haxesUID19__5->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   haxesUID19__5->GetXaxis()->SetNdivisions(407);
   haxesUID19__5->GetXaxis()->SetLabelFont(133);
   haxesUID19__5->GetXaxis()->SetLabelSize(35);
   haxesUID19__5->GetXaxis()->SetTitleSize(45);
   haxesUID19__5->GetXaxis()->SetTitleOffset(0.9);
   haxesUID19__5->GetXaxis()->SetTitleFont(133);
   haxesUID19__5->GetYaxis()->SetTitle("1#minusCL");
   haxesUID19__5->GetYaxis()->SetNdivisions(407);
   haxesUID19__5->GetYaxis()->SetLabelFont(133);
   haxesUID19__5->GetYaxis()->SetLabelOffset(0.01);
   haxesUID19__5->GetYaxis()->SetLabelSize(35);
   haxesUID19__5->GetYaxis()->SetTitleSize(45);
   haxesUID19__5->GetYaxis()->SetTitleOffset(0.95);
   haxesUID19__5->GetYaxis()->SetTitleFont(133);
   haxesUID19__5->GetZaxis()->SetLabelFont(42);
   haxesUID19__5->GetZaxis()->SetTitleOffset(1);
   haxesUID19__5->GetZaxis()->SetTitleFont(42);
   haxesUID19__5->Draw("axissame");
   
   Double_t UID18_fx6[55] = {
   -1e-08,
   -1e-08,
   2.000001e-10,
   2.06e-08,
   4.1e-08,
   6.14e-08,
   8.18e-08,
   1.022e-07,
   1.028128e-07,
   1.226e-07,
   1.43e-07,
   1.634e-07,
   1.838e-07,
   2.042e-07,
   2.246e-07,
   2.45e-07,
   2.654e-07,
   2.858e-07,
   3.062e-07,
   3.266e-07,
   3.47e-07,
   3.674e-07,
   3.878e-07,
   4.082e-07,
   4.286e-07,
   4.49e-07,
   4.694e-07,
   4.898e-07,
   5.102e-07,
   5.306e-07,
   5.51e-07,
   5.714e-07,
   5.918e-07,
   6.122e-07,
   6.326e-07,
   6.53e-07,
   6.734e-07,
   6.938e-07,
   7.142e-07,
   7.346e-07,
   7.55e-07,
   7.754e-07,
   7.958e-07,
   8.162e-07,
   8.366e-07,
   8.57e-07,
   8.774e-07,
   8.978e-07,
   9.182e-07,
   9.386e-07,
   9.59e-07,
   9.794001e-07,
   9.998e-07,
   1.01e-06,
   1.01e-06};
   Double_t UID18_fy6[55] = {
   0,
   0.4534999,
   0.4534999,
   0.5496692,
   0.6540222,
   0.7646868,
   0.8792718,
   1,
   1,
   0.8891998,
   0.7771089,
   0.6703848,
   0.5707242,
   0.4795001,
   0.3975586,
   0.3252514,
   0.2625871,
   0.2092248,
   0.1645391,
   0.1277345,
   0.09790649,
   0.0740982,
   0.05538858,
   0.04089798,
   0.02983754,
   0.02151173,
   0.01533078,
   0.01080153,
   0.007525949,
   0.005186505,
   0.003536131,
   0.002385688,
   0.001593093,
   0.001053128,
   0.0006893663,
   0.000446929,
   0.0002870289,
   0.0001826446,
   0.0001151769,
   7.199467e-05,
   4.461687e-05,
   2.741712e-05,
   1.670985e-05,
   1.010249e-05,
   6.059738e-06,
   3.606853e-06,
   2.130819e-06,
   1.249574e-06,
   7.275395e-07,
   4.206164e-07,
   2.415096e-07,
   1.377393e-07,
   7.804194e-08,
   7.804194e-08,
   0};
   graph = new TGraph(55,UID18_fx6,UID18_fy6);
   graph->SetName("UID18");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_haxesUID196 = new TH1F("Graph_haxesUID196","",100,0,1e-06);
   Graph_haxesUID196->SetMinimum(0);
   Graph_haxesUID196->SetMaximum(1.3);
   Graph_haxesUID196->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_haxesUID196->SetLineColor(ci);
   Graph_haxesUID196->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   Graph_haxesUID196->GetXaxis()->SetNdivisions(407);
   Graph_haxesUID196->GetXaxis()->SetLabelFont(133);
   Graph_haxesUID196->GetXaxis()->SetLabelSize(35);
   Graph_haxesUID196->GetXaxis()->SetTitleSize(45);
   Graph_haxesUID196->GetXaxis()->SetTitleOffset(0.9);
   Graph_haxesUID196->GetXaxis()->SetTitleFont(133);
   Graph_haxesUID196->GetYaxis()->SetTitle("1#minusCL");
   Graph_haxesUID196->GetYaxis()->SetNdivisions(407);
   Graph_haxesUID196->GetYaxis()->SetLabelFont(133);
   Graph_haxesUID196->GetYaxis()->SetLabelOffset(0.01);
   Graph_haxesUID196->GetYaxis()->SetLabelSize(35);
   Graph_haxesUID196->GetYaxis()->SetTitleSize(45);
   Graph_haxesUID196->GetYaxis()->SetTitleOffset(0.95);
   Graph_haxesUID196->GetYaxis()->SetTitleFont(133);
   Graph_haxesUID196->GetZaxis()->SetLabelFont(42);
   Graph_haxesUID196->GetZaxis()->SetTitleOffset(1);
   Graph_haxesUID196->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_haxesUID196);
   
   graph->Draw(" l");
   TGaxis *gaxis = new TGaxis(0,1,1e-06,1,0,1e-06,407,"-U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(62);
   gaxis->SetName("axist");
   gaxis->Draw();
   gaxis = new TGaxis(1e-06,0,1e-06,1.3,0,1.3,407,"+");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(0);
   gaxis->SetTitleFont(62);
   gaxis->SetName("axisr");
   gaxis->SetLabelColor(0);
   gaxis->Draw();
   
   TH1F *Graph_haxesUID196 = new TH1F("Graph_haxesUID196","",100,0,1e-06);
   Graph_haxesUID196->SetMinimum(0);
   Graph_haxesUID196->SetMaximum(1.3);
   Graph_haxesUID196->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_haxesUID196->SetLineColor(ci);
   Graph_haxesUID196->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   Graph_haxesUID196->GetXaxis()->SetNdivisions(407);
   Graph_haxesUID196->GetXaxis()->SetLabelFont(133);
   Graph_haxesUID196->GetXaxis()->SetLabelSize(35);
   Graph_haxesUID196->GetXaxis()->SetTitleSize(45);
   Graph_haxesUID196->GetXaxis()->SetTitleOffset(0.9);
   Graph_haxesUID196->GetXaxis()->SetTitleFont(133);
   Graph_haxesUID196->GetYaxis()->SetTitle("1#minusCL");
   Graph_haxesUID196->GetYaxis()->SetNdivisions(407);
   Graph_haxesUID196->GetYaxis()->SetLabelFont(133);
   Graph_haxesUID196->GetYaxis()->SetLabelOffset(0.01);
   Graph_haxesUID196->GetYaxis()->SetLabelSize(35);
   Graph_haxesUID196->GetYaxis()->SetTitleSize(45);
   Graph_haxesUID196->GetYaxis()->SetTitleOffset(0.95);
   Graph_haxesUID196->GetYaxis()->SetTitleFont(133);
   Graph_haxesUID196->GetZaxis()->SetLabelFont(42);
   Graph_haxesUID196->GetZaxis()->SetTitleOffset(1);
   Graph_haxesUID196->GetZaxis()->SetTitleFont(42);
   Graph_haxesUID196->Draw("axissame");
   
   TLegend *leg = new TLegend(0.19,0.78,0.5,0.9440559,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(133);
   leg->SetTextSize(21.75);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);

   ci = TColor::GetColor("#ffffff");
   leg->SetFillColor(ci);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("UID5","Prob CLs","f");

   ci = TColor::GetColor("#6666ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#6666ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(133);
   entry=leg->AddEntry("UID9","Prob","f");

   ci = TColor::GetColor("#9999cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#9999cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(133);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(1e-07,0.33731,6e-07,0.38731,"BR");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(133);
   pt->SetTextSize(35);
   TText *pt_LaTex = pt->AddText("68.3%");
   pt->Draw();
   TLine *line = new TLine(0,0.31731,1e-06,0.31731);
   line->SetLineStyle(3);
   line->Draw();
   
   pt = new TPaveText(1e-07,0.06550026,6e-07,0.1155003,"BR");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(133);
   pt->SetTextSize(35);
   pt_LaTex = pt->AddText("95.4%");
   pt->Draw();
   line = new TLine(0,0.04550026,1e-06,0.04550026);
   line->SetLineStyle(3);
   line->Draw();
   
   pt = new TPaveText(0.65,0.6,0.875,0.68,"BRNDC");
   pt->SetBorderSize(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(32);
   pt->SetTextFont(133);
   pt->SetTextSize(45);
   pt_LaTex = pt->AddText("GammaCombo");
   pt->Draw();
   tutorial_dataset_branchingRatio_clsUID1->Modified();
   tutorial_dataset_branchingRatio_clsUID1->cd();
   tutorial_dataset_branchingRatio_clsUID1->SetSelected(tutorial_dataset_branchingRatio_clsUID1);
}
