#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m1,m2;
void task1(int value)
{
m1.lock();
cout<<"first task"<<endl;
m2.lock();
cout<<"after m2="<<endl;
m2.lock();
m1.lock();

}
void tasks(int value2)
{
m2.lock();
cout<<"second task"<<endl;
m1.lock();
cout<<"after m1="<<endl;
m1.unlock();
m2.unlock();
}
int main()
{
int f=12;

thread t1(task1,10);
thread t2(tasks,20);
t1.join();
t2.join();
return 0;
}
