#include <iostream> // rename exe to .cgi extention put the file on apache24 cgi-bin then go http://localhost/cgi-bin/C++CGI.cgi
using namespace std;
int main(){
	cout << "Content-type: text/html\r\n\r\n";
	cout << "<html>\n";
	cout << "<body>\n";
	cout << "<h2> Hello World From CGI </h2> ";
	cout << "</body>\n";
	cout << "</html>\n";
	return 0;
}
