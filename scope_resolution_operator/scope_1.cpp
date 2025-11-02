#include<iostream>

using namespace std;


namespace one 
{

int x=10;
void display(){
cout<<"one namespace x value = "<<x<<endl;
}

}
namespace second
{

int x=20;
void display(){
cout<<"second namespace x value = "<<x<<endl;
}

}
namespace three
{
int z=55;
int h=77;

}
int x=40;
using namespace three;
int main()
{
cout<<"z=  "<<z<<endl;
cout<<second::x<<endl;
one::display();
}





