#include<bits/stdc++.h>
using namespace std;

int gcd (int n1, int n2){
    int gcd = 0;

    // for(int i=1; i<=min(n1, n2); i++){       // Time coplexity : O(n)
    //     if(n1 % i == 0 && n2 % i == 0){
    //         gcd = i;
    //     }
    // }

    for(int i=min(n1, n2); i>=1; i--){          // Worst case : O(n)
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
            break;
        }
    }

    return gcd;
}


int main() {
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<"GCD is "<<gcd(n1, n2);
    return 0;
}
