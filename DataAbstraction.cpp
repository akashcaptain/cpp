//here we have to be see how to Data Abstraction achives
#include<iostream>
using namespace std;
class Adder{
	private :
		int total; // Hide the Data From Outside World 
	public : // Open Other function as interface beteewn Outside World 
		Adder(int i = 0){
			total = i;
		}
		void addNum(int num){
			total += num;
		}
		int display(){
			return total;
		}
};
int main(){
	Adder a;
	a.addNum(1);
	a.addNum(10);
	cout << "Total Value is  " << a.display();
	return 0;
}
