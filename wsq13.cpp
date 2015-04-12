#include <iostream>
using namespace std;

double sqrt(double x){
    double area = x, t = 0;
    while (t != area){
        t = area;
        area = 0.5*(x/area + area);
    }
    return area;
}

int main(){
	double n;
	cout<<"This program calculates the square root of a number: "<<endl;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"The square root of "<<n<<" is "<<sqrt(n);
return 0;
}