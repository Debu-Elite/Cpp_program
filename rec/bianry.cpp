#include<iostream>
using namespace std;
#include<vector>
int binary(vector<int>t1, int number, int start, int end)
{
    int mid = (start+end)/2;
    if(start<=end)
	{
	cout<<"start= "<<start<<"end ="<<end<<endl;
	  if(t1[mid]<number)
	   {
	     start=mid+1;
	   return binary(t1,number,start,end);
	   }
	  else if(t1[mid]>number)
          {
             end=mid-1;
              return binary(t1,number,start,end);
          }
	else if(t1[mid]==number)
	  {
	    cout<<"found number"<<endl;	  
	    return mid; 
	  } 
	}
     return -1;

}
int main()
{
vector<int>t1;

for(int i=0;i<20;i++)
{t1.push_back(i);
}
int x= binary(t1,15,0,19);
cout<<"x= "<<x<<endl;
for(int j=0;j<20;j++){cout<<t1[j]<<endl;}
return 0;
}


