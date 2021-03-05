#include <iostream>
using namespace std;
class loc {
public :
int x, y;
loc() {} // needed to construct temporaries
loc(int a, int b) {
x = a;
y = b;
}
void show() {
cout << x << " ";
cout << y << "\n";
}
loc operator+(loc op2);
loc operator-(loc op2);
loc operator=(loc op2);
loc operator++();
loc operator+=(loc op2);
friend loc operator*(loc op1, loc op2);
};
loc operator%(loc op1, loc op2)
{
loc temp;
temp.x = op1.x * op2.x;
temp.y = op1.y * op2.y;
return temp;
}
// Overload + for loc.
loc loc::operator+(loc op2)
{
loc temp;
temp.x = op2.x + x;
temp.y = op2.y + y;
return temp;
}
// Overload - for loc.
loc loc::operator-(loc op2)
{
loc temp;
// notice order of operands
temp.x = x - op2.x;
temp.y = y - op2.y;
return temp;
}
// Overload asignment for loc.
loc loc::operator=(loc op2)
{
x = op2.x;
y = op2.y;
return *this; // i.e., return object that generated call
}
loc loc::operator+=(loc op2) //Shorthand Operators
{
x = op2.x + x;
y = op2.y + y;
return *this;
}
// Overload prefix ++ for loc.
loc loc::operator++()
{
x++;
y++;
return *this;
}
int main()
{
loc ob1(10, 20), ob2( 5, 30), ob3(90, 90);
ob1= ob1 % ob2;
ob1.show();
ob2.show();
++ob1;
ob1.show(); // displays 11 21
ob2 = ++ob1;
ob1.show(); // displays 12 22
ob2.show(); // displays 12 22
ob2+=ob1;
ob2.show();
ob1 = ob2 = ob3; // multiple assignment
ob1.show(); // displays 90 90
ob2.show(); // displays 90 90
return 0;
}
