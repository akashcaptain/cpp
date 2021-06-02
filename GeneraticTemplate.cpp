// Generic Programming approch Template class
#include <iostream>
using namespace std;
template <typename T> T area(T a, T b){   // template Decleration template <typename T> return-type funcname(parameter list)
	T result = a*b;
	return result;
}

int main(){
	int x = area<int>(12,43); // call template method funcname <type> (parameter )
	cout << x << endl;
	return 0;
}
