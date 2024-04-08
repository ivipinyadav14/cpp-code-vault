/*   
    A B C D       
    A B C     
    A B   
    A 
*/

#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {

    for(int i=0; i<n; i++){
        for(char c = 'A'; c <= 'A' + n - i - 1 ; c++){
            cout<<c <<" ";
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