//address operator and refarance 
#include<iostream>
using namespace std;
int main()
{
	int x=3;
	int& r = x; //refarance decleare
	cout << r << endl;
	cout << &x << endl; // using  address operators
	cout << *(&x) << endl;// adreess operator followed by pointer operator 
	return 0;
}
