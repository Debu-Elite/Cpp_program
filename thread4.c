#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


void * next(void *rec)
{
int *ptr=(int*)rec;
printf("ptr=:%d",*ptr);
return 0;
}
int main()
{
pthread_t t1;
int x=12345;
int *ptr;
ptr=&x;
pthread_create(&t1,NULL,next,ptr);
pthread_join(t1,NULL);

return 0;
}
