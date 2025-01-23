void tutorial_dataset_branchingRatio()
{
//=========Macro generated from canvas: tutorial_dataset_branchingRatioUID1/p-value curves
//=========  (Mon Dec 23 20:26:33 2024) by ROOT version 6.20/04
   TCanvas *tutorial_dataset_branchingRatioUID1 = new TCanvas("tutorial_dataset_branchingRatioUID1", "p-value curves",0,0,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   tutorial_dataset_branchingRatioUID1->SetHighLightColor(2);
   tutorial_dataset_branchingRatioUID1->Range(-2.162162e-07,-0.2833333,1.135135e-06,1.383333);
   tutorial_dataset_branchingRatioUID1->SetFillColor(0);
   tutorial_dataset_branchingRatioUID1->SetBorderMode(0);
   tutorial_dataset_branchingRatioUID1->SetBorderSize(2);
   tutorial_dataset_branchingRatioUID1->SetLeftMargin(0.16);
   tutorial_dataset_branchingRatioUID1->SetTopMargin(0.05);
   tutorial_dataset_branchingRatioUID1->SetBottomMargin(0.17);
   tutorial_dataset_branchingRatioUID1->SetFrameBorderMode(0);
   tutorial_dataset_branchingRatioUID1->SetFrameBorderMode(0);
   
   Double_t UID4_fx1[55] = {
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
   Double_t UID4_fy1[55] = {
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
   TGraph *graph = new TGraph(55,UID4_fx1,UID4_fy1);
   graph->SetName("UID4");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9999cc");
   graph->SetFillColor(ci);

   ci = TColor::GetColor("#9999cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_haxesUID51 = new TH1F("Graph_haxesUID51","",100,0,1e-06);
   Graph_haxesUID51->SetMinimum(0);
   Graph_haxesUID51->SetMaximum(1.3);
   Graph_haxesUID51->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_haxesUID51->SetLineColor(ci);
   Graph_haxesUID51->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   Graph_haxesUID51->GetXaxis()->SetNdivisions(407);
   Graph_haxesUID51->GetXaxis()->SetLabelFont(133);
   Graph_haxesUID51->GetXaxis()->SetLabelSize(35);
   Graph_haxesUID51->GetXaxis()->SetTitleSize(45);
   Graph_haxesUID51->GetXaxis()->SetTitleOffset(0.9);
   Graph_haxesUID51->GetXaxis()->SetTitleFont(133);
   Graph_haxesUID51->GetYaxis()->SetTitle("1#minusCL");
   Graph_haxesUID51->GetYaxis()->SetNdivisions(407);
   Graph_haxesUID51->GetYaxis()->SetLabelFont(133);
   Graph_haxesUID51->GetYaxis()->SetLabelOffset(0.01);
   Graph_haxesUID51->GetYaxis()->SetLabelSize(35);
   Graph_haxesUID51->GetYaxis()->SetTitleSize(45);
   Graph_haxesUID51->GetYaxis()->SetTitleOffset(0.95);
   Graph_haxesUID51->GetYaxis()->SetTitleFont(133);
   Graph_haxesUID51->GetZaxis()->SetLabelFont(42);
   Graph_haxesUID51->GetZaxis()->SetTitleOffset(1);
   Graph_haxesUID51->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_haxesUID51);
   
   graph->Draw(" f a");
   
   TH1F *haxesUID9__1 = new TH1F("haxesUID9__1","",100,0,1e-06);
   haxesUID9__1->SetMinimum(0);
   haxesUID9__1->SetMaximum(1.3);
   haxesUID9__1->SetStats(0);

   ci = TColor::GetColor("#000099");
   haxesUID9__1->SetLineColor(ci);
   haxesUID9__1->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   haxesUID9__1->GetXaxis()->SetNdivisions(407);
   haxesUID9__1->GetXaxis()->SetLabelFont(133);
   haxesUID9__1->GetXaxis()->SetLabelSize(35);
   haxesUID9__1->GetXaxis()->SetTitleSize(45);
   haxesUID9__1->GetXaxis()->SetTitleOffset(0.9);
   haxesUID9__1->GetXaxis()->SetTitleFont(133);
   haxesUID9__1->GetYaxis()->SetTitle("1#minusCL");
   haxesUID9__1->GetYaxis()->SetNdivisions(407);
   haxesUID9__1->GetYaxis()->SetLabelFont(133);
   haxesUID9__1->GetYaxis()->SetLabelOffset(0.01);
   haxesUID9__1->GetYaxis()->SetLabelSize(35);
   haxesUID9__1->GetYaxis()->SetTitleSize(45);
   haxesUID9__1->GetYaxis()->SetTitleOffset(0.95);
   haxesUID9__1->GetYaxis()->SetTitleFont(133);
   haxesUID9__1->GetZaxis()->SetLabelFont(42);
   haxesUID9__1->GetZaxis()->SetTitleOffset(1);
   haxesUID9__1->GetZaxis()->SetTitleFont(42);
   haxesUID9__1->Draw("axissame");
   
   Double_t UID8_fx2[55] = {
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
   Double_t UID8_fy2[55] = {
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
   graph = new TGraph(55,UID8_fx2,UID8_fy2);
   graph->SetName("UID8");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#9999cc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   
   TH1F *Graph_haxesUID92 = new TH1F("Graph_haxesUID92","",100,0,1e-06);
   Graph_haxesUID92->SetMinimum(0);
   Graph_haxesUID92->SetMaximum(1.3);
   Graph_haxesUID92->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_haxesUID92->SetLineColor(ci);
   Graph_haxesUID92->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   Graph_haxesUID92->GetXaxis()->SetNdivisions(407);
   Graph_haxesUID92->GetXaxis()->SetLabelFont(133);
   Graph_haxesUID92->GetXaxis()->SetLabelSize(35);
   Graph_haxesUID92->GetXaxis()->SetTitleSize(45);
   Graph_haxesUID92->GetXaxis()->SetTitleOffset(0.9);
   Graph_haxesUID92->GetXaxis()->SetTitleFont(133);
   Graph_haxesUID92->GetYaxis()->SetTitle("1#minusCL");
   Graph_haxesUID92->GetYaxis()->SetNdivisions(407);
   Graph_haxesUID92->GetYaxis()->SetLabelFont(133);
   Graph_haxesUID92->GetYaxis()->SetLabelOffset(0.01);
   Graph_haxesUID92->GetYaxis()->SetLabelSize(35);
   Graph_haxesUID92->GetYaxis()->SetTitleSize(45);
   Graph_haxesUID92->GetYaxis()->SetTitleOffset(0.95);
   Graph_haxesUID92->GetYaxis()->SetTitleFont(133);
   Graph_haxesUID92->GetZaxis()->SetLabelFont(42);
   Graph_haxesUID92->GetZaxis()->SetTitleOffset(1);
   Graph_haxesUID92->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_haxesUID92);
   
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
   
   TH1F *Graph_haxesUID92 = new TH1F("Graph_haxesUID92","",100,0,1e-06);
   Graph_haxesUID92->SetMinimum(0);
   Graph_haxesUID92->SetMaximum(1.3);
   Graph_haxesUID92->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_haxesUID92->SetLineColor(ci);
   Graph_haxesUID92->GetXaxis()->SetTitle("#font[32]{B}( B^{0}#rightarrow X )");
   Graph_haxesUID92->GetXaxis()->SetNdivisions(407);
   Graph_haxesUID92->GetXaxis()->SetLabelFont(133);
   Graph_haxesUID92->GetXaxis()->SetLabelSize(35);
   Graph_haxesUID92->GetXaxis()->SetTitleSize(45);
   Graph_haxesUID92->GetXaxis()->SetTitleOffset(0.9);
   Graph_haxesUID92->GetXaxis()->SetTitleFont(133);
   Graph_haxesUID92->GetYaxis()->SetTitle("1#minusCL");
   Graph_haxesUID92->GetYaxis()->SetNdivisions(407);
   Graph_haxesUID92->GetYaxis()->SetLabelFont(133);
   Graph_haxesUID92->GetYaxis()->SetLabelOffset(0.01);
   Graph_haxesUID92->GetYaxis()->SetLabelSize(35);
   Graph_haxesUID92->GetYaxis()->SetTitleSize(45);
   Graph_haxesUID92->GetYaxis()->SetTitleOffset(0.95);
   Graph_haxesUID92->GetYaxis()->SetTitleFont(133);
   Graph_haxesUID92->GetZaxis()->SetLabelFont(42);
   Graph_haxesUID92->GetZaxis()->SetTitleOffset(1);
   Graph_haxesUID92->GetZaxis()->SetTitleFont(42);
   Graph_haxesUID92->Draw("axissame");
   
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
   TLegendEntry *entry=leg->AddEntry("UID4","Prob","f");

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
   tutorial_dataset_branchingRatioUID1->Modified();
   tutorial_dataset_branchingRatioUID1->cd();
   tutorial_dataset_branchingRatioUID1->SetSelected(tutorial_dataset_branchingRatioUID1);
}
