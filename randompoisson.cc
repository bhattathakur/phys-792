#include <iostream>
#include <TRandom3.h> 
#include <TCanvas.h>
#include <TH1F.h>
using namespace std;

int main()
{
	const int trials=2000000;
	//setting the seed of gRandom as 0
	TRandom3 generator(0);
	//Defining the mean of poisson distribution
	double poissonmean=4.5;

	//Histogram to fill with random poisson numbers

	TH1F *h = new TH1F("Poisson Histo","poisson Histo",100,0.0,10.0);

	//using loop to generate random number from poisson distribution and fill the histo

	for (int i=0;i<trials;i++)
	{
		double rannum=generator.PoissonD(poissonmean);
		h->Fill(rannum);
	}
	h->Draw();
	h->Fit("gaus");

}
