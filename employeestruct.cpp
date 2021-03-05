/* Structure are used as define a class ,actually in c++
it expanded version of struct data type is know as class ,the maindifferanec between class 
and struct all those struct element are pablic by defualt and in class all are private */
#include<iostream>
#include<cstring>
using namespace std;
struct  employee{
		void getname(char *n);
		void getsalary(int s);
		void showname(char *n);
		int showsalary();
		private :
				char name[30];            // private data
				int salary;
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
int main()
{
	employee e;char name[30];
	e.getname("akash chakraborty");
	e.getsalary(50000);
	e.showname(name);
	cout << "Employee name is " << name << endl;
	cout << "Employee salary is " << e.showsalary();
	return 0;
}

