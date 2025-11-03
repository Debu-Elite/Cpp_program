#include<iostream>
using namespace std;
int main()
{

	int x=65;
	int *ptr=&x;
	int &rf=*ptr;
        int &rf3=x;
        int *ptr2=&rf3;
        cout<<"rf3"<<rf3<<endl;
	char ch=char(x);
	cout<<"ch= "<<ch<<endl;
	cout<<"rf="<<rf<<endl;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int &ar_rf=arr[5];
	cout<<"arr_rf = "<<ar_rf<<endl;
	int (&rf2)[10]=arr;
	for(int i=0;i<10;i++)
	cout<<" "<<rf2[i];
        cout<<endl;


return 0;
}
