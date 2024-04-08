/*   
    * * * * 
    * * * 
    * * 
    *
*/

#include <bits/stdc++.h>
using namespace std;

// void printStar(int n) {
//     for(int i=n; i>0; i--){
//         for(int j=i; j>0; j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// Another Logic
void printStar(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    printStar(n);
    return 0;
}