#include<iostream>
using namespace std;
class Abc
{

public:
void display();

};

void Abc::display()
{
cout<<"display is working"<<endl;
}
int main()
{

Abc obj1;
obj1.display();
return 0;
}
