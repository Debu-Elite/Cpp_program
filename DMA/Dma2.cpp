#include<iostream>
using namespace std;



class Dma
{
int x,y;
public:
Dma()
{
cout<<"constructor is called"<<endl;
}
~Dma()
{

cout<<"distructor is called"<<endl;
}

};
int main()
{

Dma *ptr=new Dma [5];

delete []ptr;

return 0;
}

