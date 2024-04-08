#include <iostream>
using namespace std;

int main()
{
    int n, orgNum;
    int num = 0;
    cout << "Enter Number : ";
    cin >> n;
    orgNum = n;
    while (n > 0)
    {
        int dig = n % 10;
        num = num + dig * dig * dig;
        n/=10;
    }
    if (orgNum == num)
        cout << orgNum << " is a Armstrong Number.";
    else
        cout << orgNum << " is not a Armstrong Number.";
    return 0;
}
