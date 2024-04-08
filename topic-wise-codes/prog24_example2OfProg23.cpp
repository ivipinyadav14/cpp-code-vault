#include <iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {
        cout << "Car started" << endl;
    }
};
class AdvanceCar : public BasicCar
{
public:
    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};

int main() {
    AdvanceCar ac;
    BasicCar *ptr = &ac;

    ptr->start();
    ptr->playMusic();  // Cannot call function of derived class using pointer of base class

    BasicCar bc;
    AdvanceCar *ptr2 = &bc;  // It is not allowed to assign address of base class to a pointer of derived class

    return 0;
}