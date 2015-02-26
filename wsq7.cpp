#include <iostream>
using namespace std;
void newLine()
{
cout<<endl;
}
int main ()
{
	int n1, n2, suma=0;
	cout<<"This program calculates the sum from the lower to to the higher numbers "<<endl;
	cout<<"you type, for example, if you enter 1 and 3, the sum will be 1+2+3=6"<<endl;
	cout<<"Enter the lower number";
	newLine();
	cin>>n1;
	cout<<"Enter the higher number";
	newLine();
	cin>>n2;
	while(n1<=n2)
	{
		suma=suma+n1;
		++n1;
	}
	cout<<"The successive sum between your interval is "<<suma;
	return 0;
}

