/*Here we have to be see friend function calling and private member element
 and public member function  */
#include<iostream>
#include<cstring>
using namespace std;
class employee{
	char name[30];            // private data
	int salary;
	public :
		void getname(char *n);
		void getsalary(int s);
		void showname(char *n);
		int showsalary();
		friend void friendfunction(employee s); // friend function declearation
};
void employee :: getname(char *n){
	strcpy(name,n);
}
void employee :: showname(char *n){
	strcpy(n,name);
}
void employee :: getsalary(int s){
	salary=s;
}
int employee :: showsalary(){
	return salary;
}
void friendfunction(employee s){
	cout << "\nHere is friend function " << endl;
	cout << "Employname " << s.name;
	cout << "Salary " << s.salary;
}
int main()
{
	employee e;char name[30];
	e.getname("akash chakraborty");
	e.getsalary(50000);
	e.showname(name);
	cout << "Employee name is " << name << endl;
	cout << "Employee salary is " << e.showsalary();
	friendfunction(e);
	return 0;
}

