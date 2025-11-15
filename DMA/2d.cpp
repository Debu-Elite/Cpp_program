#include<iostream>
using namespace std;

int main()
{
int rows=3;
int cols =4;
int **mat=new int*[rows];
for(int i=0;i<rows;i++)
{mat[i]=new int[cols];}


for(int i=0;i<rows;i++)
{
	for(int j=0;j<cols;j++)
	{cin>>mat[i][j];}
}


for(int i=0;i<rows;i++)
{
        for(int j=0;j<cols;j++)
        {cout<<" "<<mat[i][j];}
	cout<<endl;
}
return 0;
}
