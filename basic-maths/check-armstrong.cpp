#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int x) {
        long orgNum = x;
        long sum = 0;

        while(x != 0){
            int lastDigit = x % 10;
            sum = sum + lastDigit * lastDigit * lastDigit;
            x /= 10;
        }

        if(orgNum == sum)
            return true;
        else
            return false;
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    
    if (isArmstrong(n)) {
		cout << "Armstrong Number" << endl;
	} else {
		cout << "Not a Armstrong Number" << endl;
	}

    return 0;
}