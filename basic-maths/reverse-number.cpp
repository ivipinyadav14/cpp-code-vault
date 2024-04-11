#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int ans=0;

    while(n != 0){

        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n /= 10;
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<reverse(n);
    return 0;
}