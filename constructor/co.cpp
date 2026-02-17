#include<iostream>
using namespace std;

class copy
{
public:
int *ptr;

copy(){
cout<<"empyt"<<endl;
}
copy(int x)
{
ptr=new int[x];
}

void show()
{cout<<"ptr= :"<<*ptr<<endl;}

};
int main()
{
copy a1,a2(4);
copy a3=a2;
a2->ptr=5;
a1=a2;
cout<<"a1 =: "<<a1->ptr<<" a2 =: "<<a2->ptr<<" a3 =: "<<a3->ptr<<endl;

return 0;
}
