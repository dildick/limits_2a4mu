{
//=========Macro generated from canvas: cnv/cnv
//=========  (Tue Oct 16 20:09:32 2018) by ROOT version5.34/38
   TCanvas *cnv = new TCanvas("cnv", "cnv",0,0,904,928);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cnv->SetHighLightColor(2);
   cnv->Range(-1.9125,-0.00143528,9.3375,0.009605338);
   cnv->SetFillColor(0);
   cnv->SetBorderMode(0);
   cnv->SetBorderSize(2);
   cnv->SetTickx(1);
   cnv->SetTicky(1);
   cnv->SetLeftMargin(0.17);
   cnv->SetRightMargin(0.03);
   cnv->SetTopMargin(0.07);
   cnv->SetBottomMargin(0.13);
   cnv->SetFrameFillStyle(0);
   cnv->SetFrameBorderMode(0);
   cnv->SetFrameFillStyle(0);
   cnv->SetFrameBorderMode(0);
   
   TH2F *h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy = new TH2F("h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy","h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy",1000,0,9,1000,0,0.008832494);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->SetStats(0);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->SetLineStyle(0);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->SetMarkerStyle(20);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetXaxis()->SetTitle("m_{a} [GeV]");
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetXaxis()->SetNdivisions(505);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetXaxis()->SetLabelFont(42);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetXaxis()->SetLabelOffset(0.007);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetXaxis()->SetLabelSize(0.044);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetXaxis()->SetTitleSize(0.06);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetXaxis()->SetTitleOffset(0.95);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetXaxis()->SetTitleFont(42);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetYaxis()->SetTitle("#sigma(pp #rightarrow 2a + X) B^{2}(a #rightarrow 2 #mu) #alpha_{gen} [fb]");
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetYaxis()->SetLabelFont(42);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetYaxis()->SetLabelOffset(0.007);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetYaxis()->SetLabelSize(0.044);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetYaxis()->SetTitleSize(0.05);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetYaxis()->SetTitleOffset(1.7);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetYaxis()->SetTitleFont(42);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetZaxis()->SetLabelFont(42);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetZaxis()->SetLabelOffset(0.007);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetZaxis()->SetLabelSize(0.044);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetZaxis()->SetTitleSize(0.06);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->GetZaxis()->SetTitleFont(42);
   h_limit_CSxBR2xAlpha_fb_vs_mGammaD_dummy->Draw("");
   
   TGraph *graph = new TGraph(201);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,0.25,0.001853037568);
   graph->SetPoint(1,0.29125,0.00202003855);
   graph->SetPoint(2,0.3325,0.002158612362);
   graph->SetPoint(3,0.37375,0.002206955549);
   graph->SetPoint(4,0.415,0.002152487336);
   graph->SetPoint(5,0.45625,0.002043725568);
   graph->SetPoint(6,0.4975,0.001946284566);
   graph->SetPoint(7,0.53875,0.001895348709);
   graph->SetPoint(8,0.58,0.001888740323);
   graph->SetPoint(9,0.62125,0.001908665268);
   graph->SetPoint(10,0.6625,0.001940282107);
   graph->SetPoint(11,0.70375,0.001976211625);
   graph->SetPoint(12,0.745,0.002013851653);
   graph->SetPoint(13,0.78625,0.00205247359);
   graph->SetPoint(14,0.8275,0.002091860657);
   graph->SetPoint(15,0.86875,0.002131893861);
   graph->SetPoint(16,0.91,0.002172462181);
   graph->SetPoint(17,0.95125,0.002213448315);
   graph->SetPoint(18,0.9925,0.002254727303);
   graph->SetPoint(19,1.03375,0.002296166864);
   graph->SetPoint(20,1.075,0.002337627989);
   graph->SetPoint(21,1.11625,0.002378965622);
   graph->SetPoint(22,1.1575,0.002420029429);
   graph->SetPoint(23,1.19875,0.002460664643);
   graph->SetPoint(24,1.24,0.002500712984);
   graph->SetPoint(25,1.28125,0.00254001364);
   graph->SetPoint(26,1.3225,0.002578404309);
   graph->SetPoint(27,1.36375,0.002615722285);
   graph->SetPoint(28,1.405,0.002651805586);
   graph->SetPoint(29,1.44625,0.002686494106);
   graph->SetPoint(30,1.4875,0.00271963079);
   graph->SetPoint(31,1.52875,0.002751062803);
   graph->SetPoint(32,1.57,0.002780642702);
   graph->SetPoint(33,1.61125,0.002808229581);
   graph->SetPoint(34,1.6525,0.002833690186);
   graph->SetPoint(35,1.69375,0.002856899986);
   graph->SetPoint(36,1.735,0.002877744185);
   graph->SetPoint(37,1.77625,0.002896118669);
   graph->SetPoint(38,1.8175,0.002911930867);
   graph->SetPoint(39,1.85875,0.002925100536);
   graph->SetPoint(40,1.9,0.002935560431);
   graph->SetPoint(41,1.94125,0.002943256881);
   graph->SetPoint(42,1.9825,0.002948150246);
   graph->SetPoint(43,2.02375,0.002950215259);
   graph->SetPoint(44,2.065,0.002949441244);
   graph->SetPoint(45,2.10625,0.002945832202);
   graph->SetPoint(46,2.1475,0.002939406784);
   graph->SetPoint(47,2.18875,0.002930198127);
   graph->SetPoint(48,2.23,0.002918253568);
   graph->SetPoint(49,2.27125,0.002903634242);
   graph->SetPoint(50,2.3125,0.002886414558);
   graph->SetPoint(51,2.35375,0.002866681569);
   graph->SetPoint(52,2.395,0.00284453424);
   graph->SetPoint(53,2.43625,0.002820082621);
   graph->SetPoint(54,2.4775,0.002793446937);
   graph->SetPoint(55,2.51875,0.002764756604);
   graph->SetPoint(56,2.56,0.002734149181);
   graph->SetPoint(57,2.60125,0.002701769279);
   graph->SetPoint(58,2.6425,0.002667767425);
   graph->SetPoint(59,2.68375,0.002632298898);
   graph->SetPoint(60,2.725,0.002595522564);
   graph->SetPoint(61,2.76625,0.002557599699);
   graph->SetPoint(62,2.8075,0.002518693565);
   graph->SetPoint(63,2.84875,0.002479027657);
   graph->SetPoint(64,2.89,0.002441148164);
   graph->SetPoint(65,2.93125,0.00244886288);
   graph->SetPoint(66,2.9725,0.002853902959);
   graph->SetPoint(67,3.01375,0.004677104525);
   graph->SetPoint(68,3.055,0.007752479391);
   graph->SetPoint(69,3.09625,0.008440183376);
   graph->SetPoint(70,3.1375,0.005627131646);
   graph->SetPoint(71,3.17875,0.003079315004);
   graph->SetPoint(72,3.22,0.002232698982);
   graph->SetPoint(73,3.26125,0.002078218543);
   graph->SetPoint(74,3.3025,0.002031555672);
   graph->SetPoint(75,3.34375,0.001993108925);
   graph->SetPoint(76,3.385,0.001955785436);
   graph->SetPoint(77,3.42625,0.001919424608);
   graph->SetPoint(78,3.4675,0.001884091068);
   graph->SetPoint(79,3.50875,0.001849844135);
   graph->SetPoint(80,3.55,0.00181673425);
   graph->SetPoint(81,3.59125,0.001784803132);
   graph->SetPoint(82,3.6325,0.001754084028);
   graph->SetPoint(83,3.67375,0.001724602023);
   graph->SetPoint(84,3.715,0.001696374386);
   graph->SetPoint(85,3.75625,0.001669410974);
   graph->SetPoint(86,3.7975,0.001643714662);
   graph->SetPoint(87,3.83875,0.0016192818);
   graph->SetPoint(88,3.88,0.001596102701);
   graph->SetPoint(89,3.92125,0.001574162135);
   graph->SetPoint(90,3.9625,0.001553439841);
   graph->SetPoint(91,4.00375,0.001533911039);
   graph->SetPoint(92,4.045,0.001515546937);
   graph->SetPoint(93,4.08625,0.001498315239);
   graph->SetPoint(94,4.1275,0.001482180641);
   graph->SetPoint(95,4.16875,0.001467105303);
   graph->SetPoint(96,4.21,0.001453049314);
   graph->SetPoint(97,4.25125,0.00143997113);
   graph->SetPoint(98,4.2925,0.001427827986);
   graph->SetPoint(99,4.33375,0.00141657629);
   graph->SetPoint(100,4.375,0.001406171977);
   graph->SetPoint(101,4.41625,0.001396570849);
   graph->SetPoint(102,4.4575,0.001387728871);
   graph->SetPoint(103,4.49875,0.00137960245);
   graph->SetPoint(104,4.54,0.001372148676);
   graph->SetPoint(105,4.58125,0.001365325536);
   graph->SetPoint(106,4.6225,0.001359092102);
   graph->SetPoint(107,4.66375,0.001353408692);
   graph->SetPoint(108,4.705,0.001348236996);
   graph->SetPoint(109,4.74625,0.001343540194);
   graph->SetPoint(110,4.7875,0.001339283029);
   graph->SetPoint(111,4.82875,0.001335431879);
   graph->SetPoint(112,4.87,0.001331954796);
   graph->SetPoint(113,4.91125,0.001328821531);
   graph->SetPoint(114,4.9525,0.001326003541);
   graph->SetPoint(115,4.99375,0.001323473984);
   graph->SetPoint(116,5.035,0.001321207699);
   graph->SetPoint(117,5.07625,0.001319181172);
   graph->SetPoint(118,5.1175,0.0013173725);
   graph->SetPoint(119,5.15875,0.001315761338);
   graph->SetPoint(120,5.2,0.001314328845);
   graph->SetPoint(121,5.24125,0.001313057621);
   graph->SetPoint(122,5.2825,0.001311931644);
   graph->SetPoint(123,5.32375,0.0013109362);
   graph->SetPoint(124,5.365,0.001310057814);
   graph->SetPoint(125,5.40625,0.001309284177);
   graph->SetPoint(126,5.4475,0.001308604074);
   graph->SetPoint(127,5.48875,0.001308007317);
   graph->SetPoint(128,5.53,0.001307484669);
   graph->SetPoint(129,5.57125,0.00130702778);
   graph->SetPoint(130,5.6125,0.001306629121);
   graph->SetPoint(131,5.65375,0.001306281915);
   graph->SetPoint(132,5.695,0.001305980084);
   graph->SetPoint(133,5.73625,0.001305718183);
   graph->SetPoint(134,5.7775,0.00130549135);
   graph->SetPoint(135,5.81875,0.001305295252);
   graph->SetPoint(136,5.86,0.001305126038);
   graph->SetPoint(137,5.90125,0.00130498029);
   graph->SetPoint(138,5.9425,0.001304854985);
   graph->SetPoint(139,5.98375,0.001304747454);
   graph->SetPoint(140,6.025,0.001304655344);
   graph->SetPoint(141,6.06625,0.001304576589);
   graph->SetPoint(142,6.1075,0.001304509375);
   graph->SetPoint(143,6.14875,0.001304452117);
   graph->SetPoint(144,6.19,0.001304403428);
   graph->SetPoint(145,6.23125,0.001304362101);
   graph->SetPoint(146,6.2725,0.001304327087);
   graph->SetPoint(147,6.31375,0.001304297476);
   graph->SetPoint(148,6.355,0.00130427248);
   graph->SetPoint(149,6.39625,0.001304251417);
   graph->SetPoint(150,6.4375,0.001304233701);
   graph->SetPoint(151,6.47875,0.001304218827);
   graph->SetPoint(152,6.52,0.001304206362);
   graph->SetPoint(153,6.56125,0.001304195934);
   graph->SetPoint(154,6.6025,0.001304187227);
   graph->SetPoint(155,6.64375,0.001304179969);
   graph->SetPoint(156,6.685,0.001304173931);
   graph->SetPoint(157,6.72625,0.001304168916);
   graph->SetPoint(158,6.7675,0.001304164758);
   graph->SetPoint(159,6.80875,0.001304161317);
   graph->SetPoint(160,6.85,0.001304158475);
   graph->SetPoint(161,6.89125,0.001304156132);
   graph->SetPoint(162,6.9325,0.001304154203);
   graph->SetPoint(163,6.97375,0.001304152618);
   graph->SetPoint(164,7.015,0.001304151319);
   graph->SetPoint(165,7.05625,0.001304150255);
   graph->SetPoint(166,7.0975,0.001304149385);
   graph->SetPoint(167,7.13875,0.001304148676);
   graph->SetPoint(168,7.18,0.001304148099);
   graph->SetPoint(169,7.22125,0.001304147629);
   graph->SetPoint(170,7.2625,0.001304147249);
   graph->SetPoint(171,7.30375,0.00130414694);
   graph->SetPoint(172,7.345,0.001304146691);
   graph->SetPoint(173,7.38625,0.00130414649);
   graph->SetPoint(174,7.4275,0.001304146327);
   graph->SetPoint(175,7.46875,0.001304146197);
   graph->SetPoint(176,7.51,0.001304146092);
   graph->SetPoint(177,7.55125,0.001304146009);
   graph->SetPoint(178,7.5925,0.001304145942);
   graph->SetPoint(179,7.63375,0.001304145888);
   graph->SetPoint(180,7.675,0.001304145845);
   graph->SetPoint(181,7.71625,0.001304145811);
   graph->SetPoint(182,7.7575,0.001304145784);
   graph->SetPoint(183,7.79875,0.001304145763);
   graph->SetPoint(184,7.84,0.001304145746);
   graph->SetPoint(185,7.88125,0.001304145733);
   graph->SetPoint(186,7.9225,0.001304145722);
   graph->SetPoint(187,7.96375,0.001304145714);
   graph->SetPoint(188,8.005,0.001304145707);
   graph->SetPoint(189,8.04625,0.001304145702);
   graph->SetPoint(190,8.0875,0.001304145698);
   graph->SetPoint(191,8.12875,0.001304145695);
   graph->SetPoint(192,8.17,0.001304145693);
   graph->SetPoint(193,8.21125,0.001304145691);
   graph->SetPoint(194,8.2525,0.001304145689);
   graph->SetPoint(195,8.29375,0.001304145688);
   graph->SetPoint(196,8.335,0.001304145687);
   graph->SetPoint(197,8.37625,0.001304145687);
   graph->SetPoint(198,8.4175,0.001304145686);
   graph->SetPoint(199,8.45875,0.001304145686);
   graph->SetPoint(200,8.5,0.001304145685);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",201,0,9.325);
   Graph_Graph1->SetMinimum(0.0005905419);
   Graph_Graph1->SetMaximum(0.009153787);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.044);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.044);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.044);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.6,0.65,0.9,0.75,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","95% CL upper limit","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.05,0.933,0.99,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.045);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","    #bf{CMS} #it{Projection}           3000 fb^{-1} (13 TeV)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(4,0.008,"with Run 2 syst. uncert.");
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   cnv->Modified();
   cnv->cd();
   cnv->SetSelected(cnv);
}
