#include<iostream>
using namespace std;
class student{
	int studentid;
	int studentage;
	char name[30];
	char address[50];
	public : 
	    void getdata(void);
	    void display(void);
};
void student :: getdata(void)
{
   cout << "\nEnter name=";
   cin >> name;
   cout << "Enter address=";
   cin >> address;
   cout << "Enter student_id=";
   cin >> studentid;
   cout << "Enter student age";
   cin >> studentage;
}
 void student :: display(void)
 {
 	cout << "Student name=" << name;
 	cout << "Student address=" << address;
 	cout << "Student student_id=" << studentid;
 	cout << "Student age=" << studentage;
 }
 int main()
 {
 	student a;
 	a.getdata();
 	a.display();
 	
 	 return 0;
 }
