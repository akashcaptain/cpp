#include<iostream>
using namespace std;
class student{
	public :
		int marks;
		int credit;
	int marks_credit();
};
 int student:: marks_credit(){
 	return marks*credit;
 }
  int main()
  {
  	 student s1,s2;
  	 cout << "enter marks for student_1=";
  	 cin >> s1.marks;
  	 cout << "enter marks for student_2=";
  	 cin >> s2.marks;
  	 cout << "enter cridit for student_1=";
  	 cin >> s1.credit;
  	 cout << "enter cridit for student_2=";
  	 cin >> s2.credit;
  	 cout << "marks of student_1=" << s1.marks << "\t" " credit of student_1=" << s1.credit << "\n " "marks of student_2= " << s2.marks  << "\t " " credit of student_2=" << s2.credit ;
  	 cout << "\n student_1 marks_credit= " << s1.marks_credit();
  	 cout << "\n student_2 marks_credit= " << s2.marks_credit();
	return 0;
  }
