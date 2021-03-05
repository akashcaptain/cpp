//Generic Classes
#include<iostream>
using namespace std;
template <class datatype> class object{
  datatype x;
  public :
  	 object(datatype a){
  	 	x=a;
	   } 
	   void display()
	   {
	   	cout << x;
	   }
};
int main()
{
	object<int> og(2); og.display();
	return 0;
}
