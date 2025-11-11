#include<iostream>
using namespace std;

namespace Mysapce
{
int x=20;
int z=30;
void display()
{
 cout<<"x= "<<x<<" z= "<<z<<endl;
}
}


// Namespace declaration
namespace MyNamespace {

    // Variable
    int count = 5;

    // Function
    void displayCount() {
        cout << "Count = " << count << endl;
    }

    // Class
    class Demo {
    public:
        void show() {
            cout << "Inside Demo class of MyNamespace" << endl;
        }
    };
}



int main()
{
//Myspace::display();



cout<<MyNamespace::displayCount()<<endl;
return 0;
}
