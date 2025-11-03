#include<iostream>
#include<cstring>
using namespace std;
class shallow
{

int x;
char *ch;
public:
void set_data(int a, char *ptr);
void display();
//     shallow(){};
     shallow()
	{
	  ch=new char[30];
	}
};

void shallow::set_data(int a, char *ptr)
{

x=a;
int size=strlen(ptr);
strcpy(ch,ptr);
ch[size]='\0';

}
void shallow::display()
{
cout<<"ch ="<<ch<<endl;
}



class deep
{

int x;
char *ch;
public:
deep(){};
deep(deep &obj);
void set_data(int a, char *ptr);
void display();
};

void deep::set_data(int a, char *ptr)
{

x=a;
int size =strlen(ptr);

ch=new char[size+1];
strcpy(ch,ptr);
ch[size]='\0';

}
deep::deep(deep &obj)
{

x=obj.x;
int size =strlen(obj.ch);

   ch=new char[size+1];
strcpy(ch,obj.ch);
ch[size]='\0';

}

void deep::display()
{
cout<<"ch ="<<ch<<endl;
}
int main()
{


shallow sh1,sh2;

sh1.set_data(1,"hello shalow 1");
sh1.display();
sh2=sh1;
//shallow sh3(sh1);
//sh2.display();
sh1.set_data(1,"change in  shalow 1");
//sh3.display();
sh2.display();
//deep dp1;
//dp1.set_data(2,"hello from deep");
//dp1.display();

return 0;
}

