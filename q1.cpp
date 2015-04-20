//Alan Daniel Valdovinos Uribe. Mat A01630321
#include <iostream>
using namespace std;

void printT(int n){
  int i=1;
  while(i<=n){
    cout<<'T';
    i=i+1;
  }
  cout<<endl;
}

void triangles(int n){
  int i=1;
  while(i<n){
    printT(i);
    i=i+1;
  }
  i=n;
  while(i>=0){
    i=i-1;
    printT(i);
  }
}

int main(){
  int h;
  cout<<"This program constructs a triangle with the height you want."<<endl;
  cout<<"Enter height: ";
  cin>>h;
  triangles(h);
  return 0;
}
