//this pointer
#include<iostream>
using namespace std;
class object{
	int x,y;
	public :
		void getdata(int a,int b){
			this->x=a;
			this->y=b;
		} 
		void display(){
			cout << x << "&" << y;
		}
	
};
int main()
{
	object obj;
	obj.getdata(23,98);
	cout << "The value of object is ";obj.display();
	return 0;
}
