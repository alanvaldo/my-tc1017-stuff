#include <iostream>
using namespace std;

int theSum(int x, int y){
int answer=x+y;
return answer;
}

int theDifference(int x, int y){
int answer=x-y;
return answer;
}

int theDivision(int x, int y){
int answer=x/y;
return answer;
}

int theReminder(int x, int y){
int answer=x%y;
return answer;
}

int main(){

int n1, n2;
cout<<"This program calculates the sum, difference, integer based division"<<endl;
cout<<"and reminder of two numbers."<<endl;
cout<<"Input the first number: ";
cin>>n1;
cout<<"Input the second number: ";
cin>>n2;

int sum=theSum(n1, n2);
int difference=theDifference(n1, n2);
int division=theDivision(n1, n2);
int reminder=theReminder(n1, n2);

cout<<"The sum of those two numbers is: "<<sum<<endl;
cout<<"The difference of those two numbers is: "<<difference<<endl;
cout<<"The division of those two numbers is: "<<division<<endl;
cout<<"The reminder of those two numbers is: "<<reminder<<endl;

return 0;
}

