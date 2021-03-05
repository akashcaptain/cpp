#include<iostream>
using namespace std;
class car{
	char carname[10];
	int carprice;
	float carheight;
	public :
		void getdata();
		void printdata();
};
 class bike{
 	char bikename[10];
 	int bikeprice;
 	float bikeheight;
	public :
		void getdata();
		void printdata();
 };
void car :: getdata(){
	cout << "\nEnter car name=";
	cin >> carname;
	cout << "\nEnter car price=";
	cin >> carprice;
	cout << "\nEntercra height=";
	cin >> carheight;
}
void car :: printdata(){
cout << "\nYour car name is " << carname << "\n Your car price is " << carprice << "\n Your car height is " << carheight;	
}
void bike :: getdata()
{
	cout << "\nEnter your bike name=";
	cin >>  bikename;
	cout << "\nEnter your bike price =";
	cin >> bikeprice;
	cout << "\nEnter your bilke height =";
	cin >> bikeheight;
}
void bike :: printdata(){
	cout << "\n Your bike name is " << bikename << "\n Your bike prioce is " << bikeprice << "\n Your bike height is " << bikeheight;
}
 int main()
 {
 	 car one,two;
 	 bike three,four;
 	 one.getdata();
 	 one.printdata();
 	 two.getdata();
 	 two.printdata();
 	 three.getdata();
 	 three.printdata();
 	 four.getdata();
 	 four.printdata();
 	 return 0;
 }




















