#include <iostream>
#include <string>
using namespace std;
int main ()
{
string str="to be question";
string str2="the ";
string str3="or not to be";
string::iterator it;

str.insert(6,str2); 
str.insert(6,str3,3,4); 
str.insert(10,"that is cool",8); 
str.insert(10,"to be "); 
str.insert(15,1,':'); 
it = str.insert(str.begin()+5,','); 
str.insert (str.end(),3,'.'); 
str.insert (it+2,str3.begin(),str3.begin()+3); 
cout << str << '\n';
return 0;
}
