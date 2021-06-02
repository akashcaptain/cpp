#include <iostream>
using namespace std;
/*class calc // Original Program
{
  public:
    int multiply(int x, int y);
    int add(int x, int y);
 };
 int main(){
 	calc c;
 	cout << c.multiply(12,34);
 	return 0;
 }
int calc::multiply(int x, int y)
{
  return x*y;
}
int calc::add(int x, int y)
{
  return x+y;
} */

template <class A_Type> class calc // defination of template class
{
  public:
    A_Type multiply(A_Type x, A_Type y);
    A_Type add(A_Type x, A_Type y);
};
 int main(){
 	calc<int> c; // declearation 
 	cout << c.multiply(12,34);
 	return 0;
 }
template <class A_Type> A_Type calc<A_Type>::multiply(A_Type x,A_Type y)
{
  return x*y;
}
template <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y)
{
  return x+y;
}
