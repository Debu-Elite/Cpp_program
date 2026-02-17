#include<iostream>
using namespace std;
 
// public MOI
class A {


protected:
int hjk;
private:
    int x;
	int y;
    void show() {

hjk=99;
 cout << "Base class hjk" <<hjk << endl; }
	
};

class B: private A
{
public:

void base()
{
hjk=88;
x=20;
y=30;
cout<<"x= "<<x<<"y= "<<y<<endl;
}

};

int main()
{

A obj;
B obj2;
//obj2.x=10;
//obj2.hjk=90;
//cout<<obj.hjk<<endl;
//obj.show();
obj2.base();
return 0;
}
