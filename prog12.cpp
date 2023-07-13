#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main ()
{
int length;
string str = "Test string";
char* cstr = "Test string";
if ( str.length() == std::strlen(cstr) )
{
cout << "str and cstr have the same length.\n";
if ( memcmp (cstr, str.data(), str.length() ) == 0 )
cout << "str and cstr have the same content.\n";
}
return 0;
}
