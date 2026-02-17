#include <iostream>
using namespace std;

class animal {
public:
     virtual void voice() = 0;
}

class Dog : public animal {
public:
    void voice() override {    // overriding base class function
        cout << "Dog barks" << endl;
    }


class cat : public animal {
public:
    void voice override {    // overriding base class function
        cout << "cat memo" << endl;
    }

};
