#include<iostream>
#include<thread>
#include<cstring>
#include<stdlib.h>

using namespace std;
char * stringc(char *a, char *b, char *c)
{
int a_count=strlen(a);
int b_count=strlen(b);
int c_count=strlen(c);

int result= a_count+b_count+c_count+4;
char *ptr= (char*)malloc(result);


strcat(ptr,a);
strcat(ptr," ");
strcat(ptr,b);
strcat(ptr," ");
strcat(ptr,c);
strcat(ptr," ");
cout<<"ptr=: "<<ptr<<endl;
//int x=sizeof(*ptr);
//cout<<"ptr="<<x<<endl;
return ptr;
}
int main()
{
char *as="first";
char *bs ="second";
char *cs="thrid";


char *ptr=stringc(as,bs,cs);
cout<<"ptr="<<*ptr<<endl;
return 0;
}
  
