/*
• Same name different actions
• Runtime Polymorphism is achieved using function overriding
• Virtual functions are abstract functions of base class
• Derived class must override virtual function
• Base class pointer pointing to derived class object and a override function is called
*/
#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() = 0;    // Pure virtual function
};

class Fortuner : public Car
{
public:
    void start() { cout << "Fortuner Started" << endl; }
};

class Nexon : public Car
{
public:
    void start() { cout << "Nexon Started" << endl; }
};

int main()
{
    Car *p = new Fortuner();
    p->start();
    p = new Nexon();         // Creating an object dynamically
    p->start();

    return 0;
}