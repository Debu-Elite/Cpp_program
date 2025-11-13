#include<iostream>
using namespace std;
int top =-1;
#define max 5
int stack[max];
int push(int data)
{

	if(top==max-1)
	{
	cout<<"stack is full"<<endl;
	return -1;
	}
	else{
	stack[++top]=data;
	return 0;
	}
}
int pop()
{

	if(top==-1)
	{
	cout<<"empty string"<<endl;
	return -1;
	}
	else
	{
	int temp =stack[top];
	stack[top]=0;
	top--;
	return temp;
	}
}




int main()
{

int res;
for(int i=0;i<6;i++)
res=push(i);


for(int i=0;i<max;i++)
cout<<stack[i]<<" ";

for(int i=0;i<6;i++)
{
res=pop();
cout<< "res "<<res <<" ";
}
return 0;
}
