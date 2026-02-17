#include<iostream>
using namespace std;
class Ab
{
int x,y;
public:
Ab(int a, int b):x(a), y(b){}


friend ostream& operator<<(ostream &out, const Ab &obj);
};
ostream& operator<<(ostream &out, const Ab &obj)
{
out<<"obj.x= "<<obj.x<<"  obj.y"<<obj.y<<endl;
return out;
}
int main()
{
Ab obj1(2,5);
cout<<obj1<<endl;
return 0;
}

