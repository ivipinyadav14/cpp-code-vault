#include <iostream>
using namespace std;

int main()
{
    int A[10] = {2, 5, 7, 9, 10, 12, 15, 16, 17, 45};
    int key, l = 0, h = 9, mid;

    cout << "Enter the Key Number to search :";
    cin >> key;
    // Binary Search

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (A[mid] == key)
        {
            cout << "Key number is at " << mid << endl;
            exit(0);
        }
        else if (mid < key)
            l = l + 1;
        else
            h = mid - 1;
    }
    cout << "Key number is not present in the Array";
    return 0;
}