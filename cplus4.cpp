/* class data define & use as public*/
#include<iostream>
using namespace std;              // namespace define 
class object{                    // class define 
	public :
	int number;
	float point;
	char value;
};
int main()						// main() program
{
	object obj;
	obj.number=6;
	obj.point=6.0876;
	obj.value='e';
	cout << "integer value = " << obj.number << "\n " << " point value = " << obj.point << "\n " << " char value =" << obj.value;			// console output statement	
	return 0;
}
