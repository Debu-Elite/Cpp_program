#include<iostream>
using namespace std;

int main()
{
// array of 10 intgers
int *arr=new int[10];

for(int i=0;i<10;i++)
{cout<<"enter the arr["<<i<<"] :";
  cin>>arr[i];
   cout<<endl;
}


for(int i=0;i<10;i++)
{
cout<<"i="<<i<<" "<<arr[i]<<endl;

}



return 0;
}
