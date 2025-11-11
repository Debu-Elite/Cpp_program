#include<iostream>
using namespace std;
int main()
{

int y=100;
{
int y=10;
cout<<::y<<endl;
}
return 0;
}
