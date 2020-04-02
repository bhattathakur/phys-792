{

	TFile * f1=new TFile("output1.root");
	TFile * f5=new TFile("output5.root");
	TFile * f10=new TFile("output10.root");
	TTree * t1=(TTree*)(f1->Get("t"));
	TTree * t5=(TTree*)(f5->Get("t"));
	TTree * t10=(TTree*)(f10->Get("t"));
	t1->Draw("x0","pdg==11");
	t5->Draw("x0","pdg==11","same");
	t10->Draw("x0","pdg==11","same");
}
