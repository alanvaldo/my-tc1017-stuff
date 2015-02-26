#include <iostream>
using namespace std;

// main: calculate sum, difference, product, integer based division and remainder of integer division of two numbers

int main (){

	int n1;
	int n2;
	cout << "give me a number ";
	cin >> n1;
	cout << "give me another number ";
	cin >> n2;
	cout << "the sum of the two numbers is " <<n1+n2<< endl;
	cout << "the difference is " <<n1-n2<< endl;
	cout << "the product is " <<n1*n2<< endl;
	cout << "the integer based division is "<<n1/n2<< endl;
	cout << "the remainder of integer division is " <<n1%n2<< endl;

return 0;
}