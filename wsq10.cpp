#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	double val, sum, avg, var, sdev;
	cout<<"This program calculates the sum, average"<<endl; 
	cout<<"and standard deviation of 10 numbers.";
	vector<double> Lists (9);
	cout<<"Introduce the 10 numbers: "<<endl;
	for(int i=0; i<=9; i++){
		cout<<"Num "<<i+1<<": ";
		cin>>val;
		Lists[i]=val;
	}
	for(int i=0; i<=9; i++){
		sum=sum+Lists[i];
	}
	avg=sum/10;
	for(int i=0; i<=9; i++){
		var=var+pow((Lists[i]-avg),2);
	}
	var=var/10;
	sdev=sqrt(var);
	cout<<"Sum="<<sum<<endl;
	cout<<"Average="<<avg<<endl;
	cout<<"Standard deviation="<<sdev<<endl;
	return 0;
}