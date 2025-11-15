#include<iostream>
using namespace std;


int multiple(int row1, int row2, int col1, int col2,int **arr1, int **arr2)
{

int **res=new int*[row1];
for(int i=0;i<row1;i++)
{res[i]=new int[col2];}
if(col1!=row2)
{


cout<<"can not multiply"<<endl;

return -1;
}
else
{
//int **res=new int[row1][col2];



for(int i=0;i<row1;i++)
	{for(int j=0;j<col2;j++)
	  { for(int k=0;k<col1;k++)
		{res[i][j]+=arr1[i][k]*arr2[k][i];}
	  }
	}
}


for(int i=0;i<row1;i++)
        {for(int j=0;j<col2;j++)
          { cout<<" "<<res[i][j];
          }
	cout<<endl;
	}

return 0;
}



int main()
{
int row1=3;
int col1 =4;
int **arr1=new int*[row1];
for(int i=0;i<row1;i++)
{arr1[i]=new int[col1];}


int row2=4;
int col2 =3;
int **arr2=new int*[row2];
for(int i=0;i<row2;i++)
{arr2[i]=new int[col2];}



for(int i=0;i<row1;i++)
{
        for(int j=0;j<col1;j++)
        {cin>>arr1[i][j];}
}


for(int i=0;i<row2;i++)
{
        for(int j=0;j<col2;j++)
        {cin>>arr2[i][j];}
}




for(int i=0;i<row1;i++)
{
        for(int j=0;j<col1;j++)
        {cout<<" "<<arr1[i][j];}
        cout<<endl;
}


for(int i=0;i<row2;i++)
{
        for(int j=0;j<col2;j++)
        {cout<<" "<<arr2[i][j];}
        cout<<endl;
}
 multiple(row1,  row2, col1, col2, arr1,  arr2);
return 0;
}



















