#include <iostream>
#include <TROOT.h>
#include <TH2.h>
#include <TCanvas.h>
#include <TPaveStats.h>
#include <TRandom3.h>
using namespace std;
int main()
{
	gROOT->Reset();
	const int TRIALS=1000000;
	TRandom3 generator(0);
	TCanvas * can=new TCanvas();
	
	TH2C *myhisto=new TH2C("myhisto","a 2D histogram", 100,-6,6,100,-6,6);
	//Filling 2D histogram with random gaussian distribution
	for (int i=0;i<TRIALS;i++)
	{
		myhisto->Fill(generator.Gaus(1,1),generator.Gaus(1,1));
	}
	myhisto->Draw("colz");
	gPad->Update(); //without this TPaveStat will give null pointer
	//Changing the position of the stat box
	TPaveStats *st = (TPaveStats*)myhisto->FindObject("stats");
	st->SetX1NDC(0.1);
	st->SetX2NDC(0.2);
	can->SaveAs("2dhistogram.png");
	can->Draw();
	return 0;
}


