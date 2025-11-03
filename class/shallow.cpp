#include <iostream>
#include <cstring>
using namespace std;

class Test {
private:
    char *ptr;

public:
    // Parameterized Constructor
    Test(const char *str) {
        ptr = new char[strlen(str) + 1];   // allocate memory
        strcpy(ptr, str);
    }

    // ❌ Shallow Copy Constructor
    Test(const Test &obj) {
        ptr = obj.ptr;   // copies only pointer (NOT memory)
        cout << "Shallow Copy Constructor Called\n";
    }

	
    void show() const {
        cout << "String: " << ptr << endl;
    }

    ~Test() {
        delete[] ptr;    // Both objects will try to delete same memory → crash
        cout << "Destructor Called\n";
    }
};

int main() {
    Test t1("Hello World");

    Test t2 = t1; // Calls shallow copy constructor

    t1.show();
    t2.show();

    return 0;
}
