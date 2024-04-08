#include <iostream>
using namespace std;

int main()
{
    int a, b, c, option;
    cout << "----------Menu---------" << endl
         << "1. Addition\n2. Substract\n3. Multiply\n4. Divide" << endl;
    cout << "Choose option :";
    cin >> option;

    if (option > 0 && option <= 4)
    {
        cout << "Enter any two numbers :";
        cin >> a >> b;
        
        switch (option)
        {
        case 1:
            c = a + b;
            break;
        case 2:
            c = a - b;
            break;
        case 3:
            c = a * b;
            break;
        case 4:
            c = a / b;
            break;
        }
        cout << c << endl;
    }
    else
        cout << "Invalid Option";

    return 0;
}
