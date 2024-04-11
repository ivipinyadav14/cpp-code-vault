#include<bits/stdc++.h>
using namespace std;

vector<int> printDivisors(int n){
    vector <int> div;
    // for(int i=1; i<=n; i++){

    //     if(n % i == 0){
    //         div.push_back(i);
    //     }  
    // }

    // Another way to solve to reduce time complexity
    for(int i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            div.push_back(i);
            
            if(i != n/i)
                div.push_back(n/i);
        }
    }
    sort(div.begin(), div.end());

    return div;
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    vector<int> div = printDivisors(n);
    cout<<"Divisors: ";
    for(int i=0; i<div.size(); i++){
        cout<<div[i]<<" ";
    }
    return 0;
}