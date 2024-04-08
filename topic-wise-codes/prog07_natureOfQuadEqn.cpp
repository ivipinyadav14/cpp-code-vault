#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter a, b, c : ";
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);

    if (d == 0)
    {
        cout << "Roots are real and equal" << endl;
        cout << -b / (2 * a);
    }
    else if (d > 0)
    {
        cout << "Roots are real and Unequal" << endl;
        cout << -b + sqrt(d) / (2 * a) << endl;
        cout << -b - sqrt(d) / (2 * a);
    }
    else
    {
        cout << "Roots are imaginary";
    }
    return 0;
}