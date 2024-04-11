#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int cnt = 0;

    // for(int i=1; i<=n; i++){
    //     if(n % i == 0){
    //         cnt++;
    //     }
    // }

    // if(cnt == 2)
    //     return true;
    // else
    //     return false;  

    //Another way to solve to reduce time complexity
    for(int i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            
            if(i != n/i)
                cnt++;
        }
    }
    if(cnt == 2)
        return true;
    else
        return false; 
}


int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    if (isPrime(n)) {
		cout << "Prime Number" << endl;
	} else {
		cout << "Not a Prime Number" << endl;
	}
    return 0;
}