y
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
void thread1(void abc )
{
cout<<"inside thread one"<<endl;
}
void thread2(void abb)
{
cout<<"inside second thread"<<endl;
}
std::mutex m1, m2;
int main(int agrc, char *argv[])
{

thread t1(thread1,NULL), t2(thread2,NULL);
t1.join();
t2.join();
return 0;
}


