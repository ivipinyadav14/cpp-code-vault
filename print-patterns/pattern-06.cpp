/*   
    1 2 3 4 
    1 2 3 
    1 2
    1
*/

#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<j+1<<" ";
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