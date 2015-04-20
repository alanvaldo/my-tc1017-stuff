//Alan Daniel Valdovinos Uribe. Mat A01630321
#include <iostream>
#include <cmath>
using namespace std;

int superpower(int a, int b){
  int i=1;
  int n=a;
  if(b==0){
	  return 1;
  } else{
		while(i<b){
			a=n*a;
			i=i+1;
		}
		return a;
	}
}

int main(){
  int a, b, result;
  cout<<"This program calculates any number to any power"<<endl;
  cout<<"Enter number: ";
  cin>>a;
  cout<<"Enter power: ";
  cin>>b;
  result=superpower(a, b);
  cout<<a<<" to the "<<b<<"="<<result;
  cout<<endl;
  return 0;
}


