/*
- Virtual functions are used for achieving polymorphism
- Base class can have virtual functions
- Virtual functions can be overrides in derived class
- Pure virtual functions must be overrides by derived class
*/

#include<iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start() { 
        cout << "BasicCar started" << endl; 
    }
};

class AdvanceCar : public BasicCar
{
public:
    void start() { 
        cout << "AdvanceCar Started" << endl; 
    }
};

int main()
{
    BasicCar *p = new AdvanceCar();  
    // Here derived class func will be called because we have declared base class function as virtual
    p->start();
}