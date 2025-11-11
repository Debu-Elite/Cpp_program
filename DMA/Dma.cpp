#include<iostream>
using namespace std;
int main()
{
int *ptr= new int(10);
//ptr=24;
cout<<"ptr ="<<*ptr<<endl;
delete ptr;



int *arr= new int [10];
for(int i=0;i<10;i++)
{
arr[i]=i;
cout<<arr[i]<<endl;

}
delete []arr;

return 0;
}
