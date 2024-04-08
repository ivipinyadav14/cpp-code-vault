#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if (a > b && a > c)
        return a;

    else if (b > c)
        return b;

    else
        return c;
}

int main()
{
    int x, y, z, r;
    cout << "Enter any three numbers :" << endl;
    cin >> x >> y >> z;
    r = maximum(x, y, z);
    cout << "Maximum number is " << r << endl;
    return 0;
}