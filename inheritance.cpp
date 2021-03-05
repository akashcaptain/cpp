//inheritance 
#include<iostream>
using namespace std;
class base{
	int i,j;
	public :
		void getdata(int a,int b){
			i=a;j=b;
		}
		void show()
		{
			cout << "Value of object of base i=" << i;
			cout << "Value of object of base j=" << j;
		}
};
class derived : public base {
	int k;
	public :
	derived(int a){
		k=a;
	}
	void showderived()
	{
		cout << " Value of derived k= " <<  k;
	}
};
 int main()
 {
 	derived obj(3);
 	obj.getdata(1,2);
 	obj.show();
 	obj.showderived();
 	return 0;
 }
