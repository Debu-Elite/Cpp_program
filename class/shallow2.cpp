#include<iostream>
#include "shallow2.hpp"
#include<cstring>
using namespace std;
shallow::shallow()
	{
	   chr=new char [30];
	}
void shallow::update(char *ptr)
{
	int size= strlen(ptr);
	strcpy(chr,ptr);
	chr[size]='\0';
}
shallow::~shallow()
   {//delete []chr;
}

void shallow::display()
{cout<<chr<<endl;}



int main()
{
shallow s1,s2;
s1.update("hello");
s2=s1;
s1.update("new hello");
s2.display();
s2.update("hi s1 from s2");
s1.display();

return 0;
}


