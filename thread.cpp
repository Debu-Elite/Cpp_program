#include<iostream>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
using namespace std;

void* function(void *ptr)
{
int *pr=(int*)&ptr;
std::cout<<"ptr"<<endl;
return 0;
}
int main()
{
pthread_t t1, t2;
pthread_create(&t1,NULL,function,NULL);
//pthread_create(&t2,NULL,task2,NULL);
pthread_join(t1,NULL);
return 0;
}



