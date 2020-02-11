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
	return 0;
	
}
