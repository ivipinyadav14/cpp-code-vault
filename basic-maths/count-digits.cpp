#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){

    // int cnt=0;
    // while(n > 0){
    //     n = n / 10;
    //     cnt++;
    // }

    int cnt = (int) log10(n) + 1;       //Short way of counting digits

    return cnt;
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Number of digits : "<<countDigits(n);
    return 0;
}