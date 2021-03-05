// a simple procedure of constructor & destractor 
#include<iostream>
using namespace std;
class student{
	public :
	int s1;
	//decleare constructor & desctructor 
	student();
	~student();
};
	student::student(){
	cout << "constructor running";
	s1=3;
	cout << "\nInstializing finsh";
}
student::~student(){
	cout << "\ndestructor is running";
	 cout << "\nfinsh";
}
int main()
{
		student a;
		cout << "\na=" << a.s1 ;
	return 0;
}
