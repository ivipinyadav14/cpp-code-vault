#include <iostream>
using namespace std;

class Base {
    public:
    void fun1() {
        cout<<"Fun1 of base class"<<endl;
    }
};

class Derived:public Base {
    public:
    void fun2() {
        cout<<"Fun2 of derived class"<<endl;
    }
};

int main() {
    Derived d;
    
    d.fun1();
    d.fun2();

    cout<<"Now, Calling functions by using pointer"<<endl;
    Base *ptr = &d;    // Pointer of base class but object is of derived class
    ptr->fun1();
    ptr->fun2();       // Cannot call fun2 of derived class
}