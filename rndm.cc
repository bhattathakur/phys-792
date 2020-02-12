#include <iostream>
#include <TRandom3.h> 
#include <TH1.h>
using namespace std;

int main()
{

	TRandom3 generator(0);//(0) is the seed of the random number of generator
	double poissonmean=4.5;//mean for the poisson distribution
	//cout<<"Generating the random numbers which obey poissons's distribution with mean "<<poissonmean<<endl;
	TH1F * h=new TH1F("Poisson Histo","poisson Histo",100,0.0,10.0);	
	for (int i=0;i<100;i++){
		double randompoisson=generator.Poisson(poissonmean);
		cout<<randompoisson<<endl;
		//Creating a histogram for root

		h->Fill(randompoisson);
		
		
	//cout<<"random poisson\t"<<randompoisson<<endl;
	}	
	h->Draw();
	return 0;
	
}
