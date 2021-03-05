#include<iostream>
using namespace std;
class item{
	int base;
	int exp;
	int val=1;
	public :
		item(){
		cout << "Enter base value =";
		cin >> base;
		cout << "Enter exp value =";
		cin >> exp;
		}
		void execute(){
			if(exp == 0) return ;
			for(;exp>0;exp--)
			val = val*base ;
			cout << "Value is " << val;
		}
		
};
int main(){
	item a;
	a.execute();
	
	return 0;
}
