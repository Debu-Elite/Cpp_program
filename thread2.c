#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
void * function(void *ptr)
{
int *rt=(int*)ptr;
printf("ptr=:%d",*rt);
}
int main()
{
pthread_t t1;
int a=10;
int *b=&a;
pthread_create(&t1,NULL,function,b);
pthread_join(t1,NULL);
return 0;
}
