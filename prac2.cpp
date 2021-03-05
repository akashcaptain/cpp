#include<iostream>
using namespace std;
class class1{
	int a,b;
	public :
	  class1(){
			cout << "Enter value of a=" << endl;
			cin >> a;
			cout << "Enter value of b=" << endl;
			cin >> b;
		}
		void display(){
 	cout << "\nYour enter data is " << a << "\t"<< b << endl;
 }
};
int main(){
	class1 a;
	a.display();
	return 0;
}
 
