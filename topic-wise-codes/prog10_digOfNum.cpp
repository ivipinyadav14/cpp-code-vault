#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    while(n>0)
    {
        int dig = n % 10;
        cout<<dig<<endl;
        n = n / 10;   
    }
    return 0;
}
