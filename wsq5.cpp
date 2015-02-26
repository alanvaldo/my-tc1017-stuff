#include <iostream>
using namespace std;

int main ()
{
double tf, tc;
cout << "What's the temperature in Farenheit degrees? " <<endl;
cin >> tf;
tc=5*(tf-32)/9;
cout << "A temperature of " <<tf<<" degrees Farenheit is "<<tc<<" celcius degrees"<<endl;
if(tc<100)
{
cout << "Water doesn't boil at this temperature"<<endl;
}
else
{
cout << "Water boils at this temperature"<<endl;
}
return 0;
}