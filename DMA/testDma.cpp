#include<iostream>
using namespace std;
class Dma
{

int x,y,z;
int *ptrs;
public:
Dma(int a, int b, int c):x(a),y(b),z(c){
ptrs=new int(a+b+c);
cout<<"calling cons"<<*ptrs<<endl;
cout<<"x="<<x<<" y= "<<y<<" z"<<z<<endl;
}

~Dma()
{
delete ptrs;
cout<<"dist is called"<<endl;
}



};

int main()
{
// array of 10 intgers
Dma *User=new Dma(12,13,14);
Dma *User2=new Dma(17,18,19);

delete User;
delete User2;
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
