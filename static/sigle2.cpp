#include <iostream>
using namespace std;

class sig
{
static sig *sig1;
int x,y;
sig(const sig&)=delete;
sig& operator=(const sig&)=delete;
sig()
{cout<<"called cons"<<endl;}
public:
static sig* creat_object(int a, int b)
{
if(sig1==nullptr)
{

sig1= new sig;
sig1->x=a;
sig1->y=b;
return sig1;
	}
return sig1;
}
static void  distor()
{

delete sig1; 

}
~sig()
{cout<<"distructor has called"<<endl;}
void display()
{cout<<"value of x=: "<<x<<"y=: "<<y<<endl;}
};


sig* sig::sig1=nullptr;
int main()
{
sig *a=sig::creat_object(3,4);
sig *b=sig::creat_object(5,10);
a->display();
b->display();
sig::distor();  // now destructor will run
return 0;
}
