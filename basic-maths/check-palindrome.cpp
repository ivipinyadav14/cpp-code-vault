#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        long orgNum = x;
        long revNum = 0;

        if(orgNum < 0)
            return false;

        while(x != 0){
            int lastDigit = x % 10;
            revNum = revNum * 10 + lastDigit;
            x /= 10;
        }

        if(orgNum == revNum)
            return true;
        else
            return false;
}

int main() {
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    if (isPalindrome(n)) {
		cout << "Palindrome Number" << endl;
	} else {
		cout << "Not a Palindrome Number" << endl;
	}
    return 0;
}