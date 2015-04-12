#include <iostream>
#include <cmath>
using namespace std;

float estimating_e (float n)
{
	float x=0.0, e=0.0;
	float factorial= 1;
	for(float i=1; i<=n; i++)
	{
		factorial = factorial * i;
		x = x + 1/factorial;
	}
	e = x + 1;
	return e;
}

int main ()
{
	float n;
		cout<<"Este programa calcula el valor de e"<<endl;
		cout<<"Introduce un número, entre más grande, el valor de e será más preciso: ";
		cin>>n;
		cout<<"e="<< estimating_e(n);
	return 0;
}