#include <iostream>
#include <TRandom3.h> 
using namespace std;

int main()
{

	TRandom3 generator(0);//(0) is the seed of the random number of generator
	double poissonmean=4.5;//mean for the poisson distribution
	//cout<<"Generating the random numbers which obey poissons's distribution with mean "<<poissonmean<<endl;
	//for (int i=0;i<10;i++){
	double randompoisson=generator.Poisson(poissonmean);
	cout<<randompoisson<<endl;
	//cout<<"random poisson\t"<<randompoisson<<endl;
	//}
	return 0;
	
}
