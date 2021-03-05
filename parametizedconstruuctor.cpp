// parameterized constructor
#include<iostream>
using namespace std;
class myclass{
	public :
		int x;
		myclass(int i);
		~myclass();
};
myclass:: myclass(int i){
	x=i;
	cout << "constructor is on x= "<< x;
}
myclass::~myclass(){
	cout << "destructor is on.";
}
int main()
{
	
	myclass obj2(6);
	myclass obj1(2);
	return 0;
}

