// operator overloding 
#include <iostream>
using namespace std;
class loc{
	int longitude,latitude;
	public :
	/*	loc() { // basic constructor
			longitude = 0;
			latitude = 0;
		} */
		loc(int a = 0 , int b = 0){ // default arguments constructor 
			longitude = a; latitude = b;
		}
		void display(){
			cout << "The lacation longitude is " << longitude << endl;cout << "The lacation latitude is " << latitude << endl;
		}
		loc operator+(loc &l); // operator overloading decleration call by referance 
};
loc loc::operator+(loc &l){ // defination 
	longitude = longitude + l.longitude;
	latitude = latitude + l.latitude;
	return *this;
}
int main(){
	loc l;
	l.display(); // provide no argument 
	loc l1(12,23);l1.display(); // provide two argument 
	loc l2(12);l2.display(); // provide only one arguments
	loc l3(0,12); 
	l3.display();
	l = l2 + l1; // operator overloading use 
	l.display();
	return 0;
}

