#include<iostream>
using namespace std;
class A
{

int x,y;
public:
A(){}
A(int a, int b):x(a),y(b){}
void display()
{
cout<<"x= :  "<<x<<" y= :"<<y<<endl;
}
};

class B:public A
{
int Bx,By;
public:
B(){}
B(int a, int b,int c, int d):A(a,b),Bx(c),By(d){}
void display()
{
A::display();
cout<<"Bx= :  "<<Bx<<" By= :"<<By<<endl;
}
};

int main()
{

A obj(1,2);
B obj1(1,2,3,4);
obj.display();
obj1.display();
return 0;}

