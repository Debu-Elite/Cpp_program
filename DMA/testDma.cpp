#include<iostream>
using namespace std;

int main()
{

int *ptr=new int(12);
cout<<*ptr<<endl;

float *fptr=new float(2.2);
cout<<"float value:"<<*fptr<<endl;

char *ctr=new char;
*ctr='a';
cout<<"char value:"<<*ctr<<endl;
return 0;
}
