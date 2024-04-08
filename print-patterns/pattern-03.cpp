/*   
    1 
    1 2 
    1 2 3
    1 2 3 4
*/

#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    printStar(n);
    return 0;
}