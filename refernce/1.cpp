#include<iostream>
using namespace std;
int main()
{
int varb1=10;
int varb2=50;
int &ref1;
int *ptr=&varb1;
int &ref1=varb2;
int *&ref2=ptr;
cout<<ref1<<endl;
varb1=15;
cout<<ref1<<endl;
ref1=20;
cout<<varb1<<endl;
cout<<"printing referce to pinter "<<*ref2<<endl;

int arr[5] = {1, 2, 3, 4, 5};
int (&ref)[5] = arr;   // ref is a reference to an array of 5 ints
ref[2] = 20; 
for(int j=0; j<5;j++)
{

cout<<j << " "<<ref[j]<<endl;
}
cout<<sizeof(ref1)<<endl;
cout<<sizeof(ref2)<<endl;
cout<<sizeof(ref)<<endl;

return 0;
}
