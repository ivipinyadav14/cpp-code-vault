/*   
    * * * *
    * * * * 
    * * * *
    * * * *
*/

#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number of rows & columns: ";
    cin>>n;
    printStar(n);
    return 0;
}