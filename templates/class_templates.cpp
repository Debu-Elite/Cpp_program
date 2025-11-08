#include<iostream>
using namespace std;

template<class T>
class cal
{
T x,y;
public:
cal(T x, T y)
{this->x=x;this->y=y;}
T add()
{return x+y;}
T sub()
{return x-y;}
T mul()
{return x*y;}
T div()
{return x/y;}



};
int main()
{
cal one(10,5);
int x=one.add();
cal two(2.5,3.5);
double y=two.mul();
cout<<"one ="<<x<<"two "<<y<<endl;




return 0;}

