#include<iostream>
using namespace std;
class Abc
{
static Abc *obj1;
Abc()
{
cout<<"constructor call"<<endl;
}
Abc(const Abc&)=delete;
Abc& operator=(const Abc&)=delete;

public:
static Abc* get_object()
{
if(obj1==nullptr)
{
obj1=new Abc;
return obj1;
}
return obj1;
}

};
Abc * Abc::obj1=nullptr;

int main()
{

Abc *a=Abc::get_object();
Abc *b=Abc::get_object();
if(a==b)
{
cout<<"same address"<<endl;
}



return 0;
}
