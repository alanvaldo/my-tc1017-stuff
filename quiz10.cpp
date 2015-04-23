//Question 1
#include <iostream>
#include<vector>
using namespace std;

vector<int> numbers(int n){
	vector<int> numbers(n);
	int val;
	for(int i=0; i<numbers.size(); i++){
		cout<<"Num "<<i+1<<": ";
		cin>>val;
		numbers[i]=val;
	}
	return numbers;
}

void findThrees(const vector<int>& numbers){
	int sum=0;
	for(int i=0; i<numbers.size(); i++){
		int num=numbers[i];
		if(num%3==0){
			int c=num;
			cout<<c<<"+";
			sum=sum+c;
		}
	}
	cout<<"0="<<sum;
}

int main(){
	int n;
	cout<<"Cuantos elementos tiene tu lista? ";
	cin>>n;
	vector<int>vector=numbers(n);
	cout<<endl;
	findThrees(vector);
}
