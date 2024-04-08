/*   
    D      
    C D     
    B C D  
    A B C D 
*/

#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {
    for(int i=0; i<n; i++){
        char ch = 'A' +  n - i - 1;
        for(char c = ch; c <= ch + i; c++){
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