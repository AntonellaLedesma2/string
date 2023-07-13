#include <iostream> 
#include <string>
#include <cstddef>
using namespace std;
int
main (){

string str ("Please, erase trailing white-spaces \n");
string whitespaces (" \t\f\v\n\r");
size_t found = str.find_last_not_of(whitespaces);
if (found!=string::npos)
str.erase(found+1);
else
str.clear(); // str is all whitespace
cout << '[' << str << "]\n";
return 0;
}
