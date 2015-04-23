//Question 1
#include <iostream>
#include<vector>
using namespace std;

vector<int> vec1(int n){
	cout<<"Vector 1"<<endl;
	vector<int>vec1(n);
	int val;
	for(int i=0; i<vec1.size(); i++){
		cout<<"Num "<<i+1<<": ";
		cin>>val;
		vec1[i]=val;
	}
	return vec1;
}

vector<int> vec2(int n){
	vector<int>vec2(n);
	int val;
	cout<<"Vector 2"<<endl;
	for(int i=0; i<vec2.size(); i++){
		cout<<"Num "<<i+1<<": ";
		cin>>val;
		vec2[i]=val;
	}
	return vec2;
}

void dotProduct(const vector<int>& vec1, const vector<int>& vec2){
	int sum=0;
	for(int i=0; i<vec1.size(); i++){
		int val1=vec1[i];
		int val2=vec2[i];
		cout<<"("<<val1<<"*"<<val2<<")+";
		int mult=val1*val2;
		sum=sum+mult;
	}
	cout<<"0="<<sum;
}

int main(){
	int size;
	cout<<"Este programa multiplica los numeros con la misma posicion de dos vectores: "<<endl;
	cout<<"Cuantos elementos tienen tus vectores? ";
	cin>>size;
	vector<int>vector1=vec1(size);
	vector<int>vector2=vec2(size);
	dotProduct(vector1, vector2);
}