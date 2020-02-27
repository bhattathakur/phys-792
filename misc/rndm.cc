#include <iostream>
#include <TRandom3.h> 
#include <TCanvas.h>
#include <TH1F.h>
using namespace std;

int main()
{
	const int TRIALS=1000000;//number of trials
	TRandom3 generator(0);//(0) is the seed of the random number of generator
	double poissonmean=4.5;//mean for the poisson distribution
	//Histogram to store the numbers generted by Poisson Distribution
	
	TH1F * h=new TH1F("h","Poisson Histo",10,0.0,10.0);	
	for (int i=0;i<TRIALS;i++)
	{
		double randompoisson=generator.Poisson(poissonmean);
		h->Fill(randompoisson);
	}	

	h->Draw();
	h->Fit("gaus"); //fitting the histogram with gaussian function
	gPad->Print("myhist.png");//save histogram in a file
	return 0;
	
}
