#include<iostream>
#include<vector>
using namespace std;
int top =-1;
vector<int> data_stack;
/*int push(int x)
{


        data_stack.push_back(x);
        return 0;

}
*/


int  push(int x)
{
    data_stack.push_back(x);
    cout << x << " pushed\n";
	top++;
return 0;
}

int pop()
{

        if(top==-1)
        {
        cout<<"empty string"<<endl;
        return -1;
        }
        else
        {
        int temp = data_stack.back();
        data_stack.pop_back();

        top--;
        return temp;
        }
}


int main()
{

int res;
for(int i=0;i<6;i++)
res=push(i);

for (auto it = data_stack.begin(); it != data_stack.end(); ++it)
    cout << *it << " ";

for(int i=0;i<6;i++)
{
res=pop();
cout<< "res "<<res <<" ";
}
return 0;
}
