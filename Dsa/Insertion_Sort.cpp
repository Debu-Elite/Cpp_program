#include<iostream>
using namespace std;
void inserction(int *arry, int n)
{
for(int i=1;i<n;i++)
{
int key=arry[i];
int j=i-1;

while(j>=0 && arry[j]>key)
{

arry[j+1]=arry[j];
j--;
}
arry[j+1]=key;

}
}
int main()
{

int arry[10]={7,4,8,2,9,1,10,3,5,6};
int n=10;
inserction(arry, n);
for(int g=0;g<10;g++)
cout<<arry[g]<<endl;


return 0;
}
