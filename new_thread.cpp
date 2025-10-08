#include<iostream>
#include<thread>
using namespace std;
void task(int x)
{
cout<<"x= "<<x<<endl;

}
int main()
{
int x=19;
   thread t1(task,x);
    t1.join();
     return 0;
}
