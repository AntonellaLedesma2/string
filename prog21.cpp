#include <iostream>
#include <string>
using namespace std;
int main (){
string name ("John");
string family ("Smith");
name += " K. "; 
name += family;
name += '\n'; 
cout << name;
return 0;
}
