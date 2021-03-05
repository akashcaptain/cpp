#include<iostream>
using namespace std;
class name{
	int x,y;
	public :
		name(int a,int b){
			x=a;y=b;
		}
		void diplay()
		{
			cout << "x== " << x;
			cout << "y== " << y;
		}
};
int main()
{
	name w(1,2),k(9,8),l(2,4),*p;
	p=&w;
	p->diplay();
	return 0;
}
