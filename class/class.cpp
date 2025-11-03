#include<iostream>
using namespace std;
class in
{
int x,y,z;
public:
inline in(int a, int b, int c);
inline int set_data(int a,int b, int c);

 
};
inline int in::set_data(int a, int b, int c)
{


return a+b+c;
}
inline in::in(int a, int b, int c)
{
x=a;
y=b;
z=c;
}

int main()
{
in a1(7,8,9);
int x=a1.set_data(1,2,3);
cout<<x<<endl;
return 0;
}
