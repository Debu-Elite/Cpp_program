#include<iostream>
using namespace std;
class copys
{
public:
int *ptr;

copys(){
	cout<<"empyt"<<endl;
        }
copys(int x)
	{
	ptr=new int(x);
	cout<<*ptr<<endl;
	}

copys(const copys &obj)
        {
        ptr=new int;
        *ptr=*(obj.ptr);
        }

void show()
	{
	cout<<"ptr= :"<<*ptr<<endl;
	}

};
int main()
{
int x=20;
copys a2(x);
a2.show();
copys a3=a2;
*(a3.ptr)=5;
copys a1=a2;
*(a1.ptr)=10;
cout<<"a1 =: "<<*(a1.ptr)<<" a2 =: "<<*(a2.ptr)<<" a3 =: "<<*(a3.ptr)<<endl;

return 0;
}
