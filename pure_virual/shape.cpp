#include <iostream>
using namespace std;

class Shape {// Abstract Class 
public:
    virtual void area() = 0;  // Pure virtual function
};

class Circle : public Shape {
float pi;
int r;
float A;
public:
 
    void area() override {    // Overriding
	pi=3.14;
	r=5;	
 A=pi*r*r;      
  cout << "Circle area="<<A<< endl;
    }
};



class sqr : public Shape {
int side;
int A;
public:
    void area() override {    // Overriding
	side=5;
	 A=side*side;       
cout << "sqr area="<<A<< endl;
 }
};

int main() {
    Shape* s = new Circle();  // Allowed (using pointer)
    s->area();                // Runtime polymorphism
    Shape* s2 = new sqr();
    s2->area();
    Shape sh;
//    Shape sh;
}
