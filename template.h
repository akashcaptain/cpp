#ifndef template_H_ // check if template.h exist or not
#define template_H_ // define template.h
#include <iostream>
using namespace std;
template <class A_Type> class calc // defination of template class
{
  public:
    A_Type multiply(A_Type x, A_Type y);
    A_Type add(A_Type x, A_Type y);
};
template <class A_Type> A_Type calc<A_Type>::multiply(A_Type x,A_Type y)
{
  return x*y;
}
template <class A_Type> A_Type calc<A_Type>::add(A_Type x, A_Type y)
{
  return x+y;
}
#endif
/* In general, it is bad practice to include another .cpp file inside of a .cpp file. 
The right way is to break out declarations into .h files and put the definitions in .cpp files. 
Make sure to put a bogus define at the top of each of your .h files to prevent accidental re-inclusion, as in: */
