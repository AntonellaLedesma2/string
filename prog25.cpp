#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
string str;
ifstream file ("test.txt",std::ios::in);
if (file) {
while (!file.eof()) str.push_back(file.get());
}
cout << str << '\n';
return 0;
}
