//private
#include<iostream>
using namespace std;
class base{
	int x;
	base()
	{
		cout << "Enter data =";
		cin >> x;
	}
	~base()
	{
		cout << x;
	}
	
};

