/*   
    1             1
    2 2         2 2
    3 3 3     3 3 3
    4 4 4 4 4 4 4 4
*/

#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {

    int space = 2 * n - 2;
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout<<i;
        }

        //spaces
        for(int j=1; j<=space; j++){
            cout<<" ";
        }

        //numbers
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
        space -= 2;
    }
}

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    printStar(n);
    return 0;
}