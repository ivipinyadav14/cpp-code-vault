/* 
          *
        * * *
      * * * * *
    * * * * * * * 
    * * * * * * *
      * * * * *
        * * *
          *  
*/

#include <bits/stdc++.h>
using namespace std;

void printFirstHalf(int n) {
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void printSecondHalf(int n) {
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    printFirstHalf(n);
    printSecondHalf(n);
    return 0;
}