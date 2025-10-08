#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

void* you(void *ptr)
{
int *r=(int*)ptr;
printf("ptr=%d\n",*r);
return 0;
}
int main()
{
pthread_t t1;
int x=1234;
int *ptr=&x;
pthread_create(&t1,NULL,you,ptr);
pthread_join(t1,NULL);
//you(ptr);
return 0;


}
