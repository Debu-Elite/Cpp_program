#include<iostream>
using namespace std;

int factorial(int num);

int main()
{
    int number;
    cin >> number;

    int res = factorial(number);

    cout << "res: " << res << endl;

    return 0;
}

int factorial(int num)
{
    int fact = 1;

    for(int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}