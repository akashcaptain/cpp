/*TWO CLASS DEFINATION WITH FRIEND FUNCTION CALLING private member element*/
#include<iostream>
using namespace std;
class c2;//forword defining
class c1{
	public :
	int roll;
	char name[30];
	
		void getdata();
	friend void display(c1 a,c2 b);	
};
class c2{
	public :
	char mobile[10];
	char surname[10];
	void getdata();
	
	
};
void c1 :: getdata(){
	cout << "\nEnter name of student=" ;
	cin >> name;
	cout << "\nEnter roll of student=";
	cin >> roll;
}
void c2 :: getdata(){
	cout << "\nEnter surname of student=" ;
	cin >> surname;
	cout << "\nEnter mobile of student=";
	cin >> mobile;
}
void display(c1 e1,c2 e2){
	cout << "\nEnter name of student=" << e1.name;
	cout << "\nEnter roll of student=" << e1.roll;
	cout << "\nEnter surname of student=" << e2.surname ;
	cout << "\nEnter mobile of student=" << e2.mobile;
}
int main()
{
	c1 a;
	c2 b;
	a.getdata();
	b.getdata();
	display(a,b);
	return 0;
}
