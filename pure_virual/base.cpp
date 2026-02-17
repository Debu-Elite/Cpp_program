#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {    // overriding base class function
        cout << "Derived show()" << endl;
    }
};
int main() {
    Base *ptr, obj;
    obj.show();
    Derived d;
//    Derived *str;
//    str=&e;
    ptr = &d;      // Base pointer pointing to derived object
    ptr->show();   // Calls Derived::show()   (Runtime polymorphism)

}
