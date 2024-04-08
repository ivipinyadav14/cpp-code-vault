/*   
    A       
    A B     
    A B C   
    A B C D 
*/

#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {

    for(int i=0; i<n; i++){
        for(char c = 'A'; c <= 'A' + i; c++){
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