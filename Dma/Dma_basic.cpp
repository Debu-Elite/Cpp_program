#include<iostream>
using namespace std;

int main()
{
int *ptr=new int;
cout<<"enter the number"<<endl;
cin>>*ptr;
cout<<"number=:"<<*ptr<<endl;
delete ptr;
return 0;
}
