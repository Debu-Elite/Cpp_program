#include<iostream>
#include<thread>
using namespace std;


struct count
{
int positive, negative;
int arry[10], lenght;

};

struct count check_number(struct count *a)
{

struct count *c;
c=a;
c->negative=0;
c->positive=0;
for(int i=0;i<c->lenght;i++)
	{
	    if(c->arry[i]<0)
		{
		   c->negative++;
		}
		else
		 {
		   c->positive++;
		 }
	}
	return *c;
}

int main()
{
struct count d;
d.lenght=10;
for(int i=0;i<10;i++)
{
cout<<"enter the arr[%d] \n"<<endl;
cin>>d.arry[i];
}
thread t1(check_number,&d);
cout<<"negative number = "<<d.negative<<"  positvie number"<<d.positive<<endl;
t1.join();
cout<<"negative number = "<<d.negative<<"  positvie number"<<d.positive<<endl;
return 0;
}



