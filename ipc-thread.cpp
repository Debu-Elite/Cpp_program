#include<iostream>
#include<thread>
#include<mutex>
#include<unistd.h>
using namespace std;
mutex a1,b1;
union student {
struct detail
{
int roll,Class;
char name[50];

}det;
struct marks
{
int maths, english,hindi;
}mar;

};
void task_makelist(union student obj[],int i)
{
a1.lock();

cout<<"fill details"<<endl;
cin>>obj[i].det.roll;
cin>>obj[i].det.name;
cout<<"detail done"<<endl;
sleep(1);
b1.lock();
a1.unlock();
b1.unlock();

}
void result(union student obj[], int i)
{b1.lock();
cout<<"fill 2 thread details"<<endl;
cin>>obj[i].mar.maths;
cin>>obj[i].mar.hindi;
sleep(1);
a1.lock();
a1.unlock();
b1.unlock();
}

int main()
{
union student obj[50];
int i=0;
thread t1(task_makelist,obj, i);
//i=2;
thread t2(result,obj, i);

t1.join();
t2.join();
return 0;
}
