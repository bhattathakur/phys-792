//Create a histogram to hold random exponential decay data, fit it with a exponential function
#include <iostream>
#include <TRandom3.h> 
#include <TCanvas.h>
#include <TH1F.h>
using namespace std;

int main()
{
	const int TRIALS=10000000; //total number of trials
	TRandom3 generator(0);
	double tau=4.5;
	TH1F * h=new TH1F("h","Histogram for random exponential decay;numbers;freqencey",10,0.0,10.0);
	for (int i=0;i<TRIALS;i++)
	{
		double randomexp=generator.Exp(tau);
		h->Fill(randomexp);
	}
	//Defining a function for Exponential function
//	h->Draw();
	h->Fit("expo");
  //We can only use Fit function instead of both Fit and Draw
	gPad->Print("myrandomexp.png");

	return 0;
}


