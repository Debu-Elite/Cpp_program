#include<iostream>
using namespace std;
void find_LP_year(int &num);
int main()
{
  
    int number, ext;
   
   do{
         cout<<"enter a number:";
          cin>>number;
    find_LP_year(number);
cout<<endl<<"enter 0 to exit 1 to contiune"<<number<<endl;
cin>>ext;
    
} while(ext);
return 0;
}
void find_LP_year(int &num)
{
    cout<<(((num%4==0&&num%100!=0)||num%400==0)?"leap year":"not leap year");
}