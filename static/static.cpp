#include<iostream>
using namespace std;
class statics
{


static int x;
public:
static void display()
{

cout<<"running in static fuction"<<x<<endl;

}




};
int statics::x=5;
int main()
{
statics::display();
return 0;
}
