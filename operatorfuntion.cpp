//operatorfunction
#include <iostream>
using namespace std;
class loc {
int x, y;
public:
loc() {}
loc(int a, int b) {
x = a;
y = b;
}
void show() {
cout << x << " ";
cout << y << "\n";
}
loc operator+(loc obj);
};
// Overload + for loc.
loc loc::operator+(loc op2)
{
loc temp;
temp.x = op2.x + x;
temp.y = op2.y + y;
return temp;
}
int main()
{
loc ob1(10, 20), ob2( 5, 30);
ob1.show(); // displays 10 20
ob2.show(); // displays 5 30
(ob1 + ob2).show();//operator function call here ob2 as argument and ob1 element of class
return 0;
}
