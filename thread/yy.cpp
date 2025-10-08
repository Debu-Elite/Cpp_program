#include<iostream>
#include<thread>
using namespace std;

void task(int number)
   {
	int res =0;
	cout<<"number= "<<number<<endl;
	do{
       res=res+(number%10);
           number=number/10;
	   
	}while(number);
	cout<<"res= "<<res<<endl;
//	return 0;

   }
void task2(int number)
{

	cout<<"number= :"<<number<<endl;

}
int main()
{
int x=12345;
 thread t1(task,x);
t1.join();
return 0;
}

