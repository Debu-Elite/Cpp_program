#include<iostream>
using namespace std;
void multiple(int **ptr1,int **ptr2,int **ptr3, int row1,int col1, int col2)
{

for(int i=0;i<row1;i++)
  {
    for(int j=0;j<col2;j++)
	{
          for(int k=0;k<col1;k++){
	  ptr3[i][j]+=ptr1[j][k]*ptr2[i][k];
            
		}
		cout<<ptr3[i][j]<<" ";
         }
	cout<<endl;
   }

}

int main()
{
int **ptr1,**ptr2,**ptr3;
int row1=3,col1=2, row2=2, col2=3, row3,col3;
ptr1=new int*[row1];
for(int i=0;i<row1;i++)
ptr1[i]=new int[col1];
int count2=1;

for(int i=0;i<row1;i++)
  {
    for(int j=0;j<col1;j++)
        {
          ptr1[i][j]=count2;
		count2++;
         }
   }


ptr2=new int*[row2];
for(int i=0;i<row2;i++)
ptr2[i]=new int[col2];
int count=1;
for(int i=0;i<row2;i++)
  {
    for(int j=0;j<col2;j++)
        {
          ptr2[i][j]=count;
	count++;
         }
   }

//for(int i=0;i<row2;i++)
//ptr3=new int*[col2];

if(col1==row1){
ptr3=new int*[row1];
for(int i=0;i<row1;i++)
ptr3[i]=new int[col2];

multiple(ptr1,ptr2,ptr3,row1,col1,col2);
}


for(int i=0;i<row1;i++)
  {
    for(int j=0;j<col2;j++)
        {
          cout<<ptr3[i][j]<<" ";
         }
	cout<<endl;
   }

return 0;
}


//for(int i=0;i<row2;i++)
//ptr3=new int*[col2];
