//dynamic memory allocation
#include<iostream>
#include<new>
using namespace std;
class project{
	int refarance;
	public :
		project(int a){
			refarance = a;
		}
		void display(){
			cout << "  " << refarance;
		}
};
int main()
{
	project *p;
	p= new project(4);
	p->display();
	return 0;
}
