{
//Reading the root file created
TFile * f1=new TFile("output10.root");
TTree * t1=(TTree*) (f1->Get("t"));
t1->Draw("x0","pdg==11");
//gPad->SetLogy(1);
TH1F * myh=(TH1F*)gPad->GetPrimitive("htemp");
myh->Fit("pol1","","",100.,1000.);
	
}
