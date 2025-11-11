#include <iostream>
#include <cstring>
using namespace std;

void revse(char *rev, int start, int end)
{

char temp=0;
   while(start < end)
    {
       temp =  rev[start];
       rev[start] = rev[end] ;
       rev[end] = temp;
       start++;
       end--;
    }

cout<<rev<<endl;

}

void revse_word(char *rev, int start, int end)
{

	int temp_start=0, temp_end=0;


         int i=0;
	while(start<=end){
			cout<<"i= :"<<i<<endl;
			cout<<"rev[i] "<<rev[i]<<endl;
			if((rev[i]==' ')||rev[i]=='\0'){
			cout<< "inside the loop"<<endl;
			temp_end=i-1; 
			revse(rev, temp_start, temp_end);
			temp_start=i+1;
			i++;
					}
			start++;
			i++;
		        }
}

int main()
{
    char rev[] = "Hello world";// world hello dlrow olleh

    int len = strlen(rev) - 1;

    int index = 0;
    //char temp = 0;
     revse(rev,index,len);
    revse_word(rev,0,len);
	cout<<" in main"<< rev<<endl;
    return 0;
}
