#include<iostream>
using namespace std;
inline int add(int a, int b)
{
return a+b;

}
int main()
{
int a=10;
int b=15;
int c=add(a,b);
cout<<"c=: "<<c;

return 0;
}
