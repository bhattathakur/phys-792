#include <iostream>
using namespace std;
#include <TRandom3.h> 

int main()
{
	int a=2;
	int b=3;
	int c=a*b;
	cout<<c<<endl;
	TRandom3 generator(0);//(0) is the seed of the random number of generator
//	generator.Rndm();
	cout<<generator.Rndm()<<endl;
	cout<<"Working after using the random generator"<<endl;
	double poissonmean=4.5;
	cout<<"Generating the random numbers which obey poissons's distribution with mean "<<poissonmean<<endl;
	for (int i=0;i<10;i++){
	double randompoisson=generator.PoissonD(poissonmean);
	cout<<"random poisson\t"<<randompoisson<<endl;
	}
	return 0;
	
}
