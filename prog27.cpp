#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
string str;
ifstream file ("test.txt",std::ios::in|std::ios::ate);
if (file) {
ifstream::streampos filesize = file.tellg();
str.reserve(filesize);
file.seekg(0);
while (!file.eof())
{
str += file.get();
}
cout << str;
}
return 0;
}
