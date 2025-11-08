#include<iostream>
using namespace std;
void normal_swap(int x, int y)
{
int temp =x;
x=y;
y=temp;
}

void refer_swap(int &x, int &y)
{
int temp =x;
x=y;
y=temp;
}
void pointer_swap(int *x, int *y)
{
int temp =*x;
*x=*y;
*y=temp;
}

int main()
{
int x=5;
int y=10;
normal_swap(x,y);
cout<<"x="<<x<< " y="<<y<<endl;
refer_swap(x,y);
cout<<"x="<<x<< " y="<<y<<endl;
pointer_swap(&x,&y);
cout<<"x="<<x<< " y="<<y<<endl;


return 0;


}
