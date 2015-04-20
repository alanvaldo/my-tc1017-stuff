//Alan Daniel Valdovinos Uribe. Mat A01630321
#include <iostream>
using namespace std;

int fibonacci(int n){
  if(n==0){
    return 0;
    } 
    int a=0;
    int b=1;
    int fibonacci=0;
    for(int i=1; i<n; i++){
      fibonacci=a+b;
      a=b;
      b=fibonacci;
      }
  return fibonacci;
}

int main(){
  int p, result, ans=1;
  while(ans==1){
	  cout<<"This program calculates fibonacci of the position you want"<<endl;
	  cout<<"Enter position: ";
	  cin>>p;
	  result=fibonacci(p);
	  cout<<"Fibonacci("<<p<<")="<<result;
	  cout<<endl;
  cout<<"Want to try other value? Yes (Type 1), No (Type 2): ";
  cin>>ans;
  cout<<endl;
  }
  return 0;
}
