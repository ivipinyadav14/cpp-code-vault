#include <iostream>
using  namespace std;

int main()
{
    int num, rev = 0;
    cout<<"Enter a Number : ";
    cin>>num;
    int orgNum = num;

    while(num > 0)
    {
        int dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;

    }
    cout<<"Reverse of "<<orgNum<<" is "<<rev<<endl;
    
    // To ch3eck palindrome
    if(rev == orgNum)
        cout<<endl<<"Given number is Palindrome.";
    
    else
        cout<<"Given number is not a Palindrome.";
    return 0;
}