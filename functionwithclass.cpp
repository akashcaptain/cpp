//FUNCTION WITH CLASS
#include<iostream>
using namespace std;
class person{
	int age;
	char name[20];
	public :
	void getdata();
	void displaydata();
};
 void person :: getdata(){
 	cout << "enter name =";
 	cin >> name;
 	cout << "\n enter age =";
 	cin >> age;
 }
 void person :: displaydata(){
 	cout << "Person mname is " << name;
 	cout << "\n Person age is " << age;
 }
 int main()
 {
 	person p;
 	p.getdata();
 	p.displaydata();
 	return 0;
 }
