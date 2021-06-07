// struct and class , union are relate to each other 
#include <iostream>
#include <cstring>
using namespace std;
/*class emp{
	private :
		string name;
		float salary;
	public :
		emp(){
			name = "\0";
			salary = 0.00;
		}
		void putname(string n){
		//	strcpy(name,n);  //convert 'std::string {aka std::basic_string<char>}' to 'char*' for argument '1' to 'char* strcpy(char*, const char*)'
		name = n;
		}
		void putsalary(float a){
			salary = a;
		}
		float showsalary(){
			return salary;
		}
		string showname(){
			return name;
		}
};
int main(){
	emp p;
	cout << " Salary is " << p.showsalary();
	return 0;
} */
/* 
class emp{
	private :
		char name[80];
		float salary;
	public :
		emp(){
			
			salary = 0.00;
		}
		void putname(char *n){
		  strcpy(name,n);
		}
		void putsalary(float a){
			salary = a;
		}
		float showsalary(){
			return salary;
		}
		string showname(){
			return name;
		}
};
int main(){
	emp p;char num[80];
cin >> num;
p.putname(num);
cout << "Name is " << p.showname() << " and Salary is " << p.showsalary();
	return 0;
}  */
/* 
struct emp{
	private :
		float salary;
		char name[80];
	public :
		emp(){
			salary = 0.00;
		}
		void putname(char *n){
			strcpy(name,n);
		}
		void putsalary(float a){
			salary = a;
		}
		float showsalary(){
			return salary;
		}
		string showname(){
			return name;
		}
};
int main(){
emp p;char num[80];
cin >> num;
p.putname(num);
cout << "Name is " << p.showname() << " and Salary is " << p.showsalary();
	return 0;
}
/* 
union emp{
	private :
		char name[80];
		float salary;
	public :
		emp(){
			salary = 0.00;
		}
		void putsalary(float a){
			salary = a;
		}
		void putname(char *n){
			strcpy(name,n);
		}
		string showname(){
			return name;
		}
		float showsalary(){
			return salary;
		}
};
int main(){
emp p;char num[80];
cin >> num;
p.putname(num);
cout << "Name is " << p.showname() << " and Salary is " << p.showsalary();
return 0;
} */
// union A union can have member functions (including constructors and destructors), but not virtual (10.3) functions. A union shall not have base classes
union emp{
	private :
		char name[80];
		float salary;
	public :
		emp(){
			salary = 0.00;
		}
		float showsalary(){
			return salary;
		}
		string showname(){
			return name;
		}
};
int main(){
	emp p;
	cout << "Name is " << p.showname() << " Salary is " << p.showsalary();
	return 0;
}
