/* friend class */
#include<iostream>
using namespace std;
class student{
	int s1;
	int s2;
	public :
		student(int a,int b){
			s1=a;
			s2=b;
		}
		friend class teacher;
};
class teacher{
	public :
		int function(student s){
			return s.s1< s.s2? s.s1 : s.s2; 
	}
};
int main(){
	 student s(10,12);
	 teacher m;
	 cout << m.function(s);
	return 0;
}
