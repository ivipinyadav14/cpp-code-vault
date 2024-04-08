#include<iostream>
using namespace std;

enum day {mon=1, tue, wed, thu, fri=10, sat, sun};   // Used to define group of related constant under one name


int main()
{
    day d;
    d= wed;
    cout<<d<<endl;

    cout<<"-------------------"<<endl;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    return 0;
}