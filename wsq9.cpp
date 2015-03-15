#include <iostream>
using namespace std;

int main(){
int n, factorial;

cout<<"This program calculates the factorial of any non-negative number you want"<<endl;
cout<<"Introduce the number: ";
cin>>n;
factorial=1;
for (int a=n; a>0; a=a-1){
		factorial=factorial*a;
}
cout<<"The result of "<<n<<"! is: "<<factorial;
return 0;
}