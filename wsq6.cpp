#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	int n1, n2, intentos=0;
	srand (time(NULL));
	n2 = 1 + rand ()%100;
	while (n1!=n2)
	{
		intentos=intentos+1;
		cout<<"Guess a number between 1 and 100."<<endl;
		cin >>n1;
		if(n1<n2)
		{
			cout<<"Too low, try again "<<endl;
		}
		else 
		{
			if(n1>n2)
			{
			cout<<"Too high, try again "<<endl;
			}
			else
			{
			}
		}
	}
	cout<<"Great!!!, you guess it "<<endl;
	if (intentos>5)
	{
		cout<<"What a bad luck you have, you took "<<intentos<<" attempts."<<endl;
	}
	else
	{
		cout<<"Well done, you took "<<intentos<<" attempts."<<endl;
	}
	return 0;
}