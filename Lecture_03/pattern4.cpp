#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n ;
    int i = 1;
    while(i <= n){
        int j = 1 ;
        while(j <= n){
        cout << " " << n-j+1; // n- j + 1 ka mtlb h... n = 3 tb 3 - 1 + 1 = 3 phir 3 - 2 + 1 = 2 phir 3 - 3 + 1 = 1
        j = j + 1;
        }
    cout << endl;
    i = i + 1;
    }
}

//  3 2 1
//  3 2 1
//  3 2 1