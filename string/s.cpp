#include <iostream>
#include <string>
using namespace std;


int main()
{
//string s;

string s("Hello"); 
string s1(5, 'A');
string s2(s);
string s3(s.begin(), s.end());


cout<<"s= :"<<s<<" s1 :"<<s1<<"s2 "<<s2<<"s3 :"<<s3<<endl;

return 0;

}

