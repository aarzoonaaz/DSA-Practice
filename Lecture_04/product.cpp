#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the value of n "<< endl;
    cin >> n ;
    int prod = 1;
    int sum = 0;
    while(n!=0){
        int rem;
    rem = n % 10;
    prod = prod * rem;
    sum = sum + rem;
    n = n / 10;
    }
    int ans = prod - sum;
    cout <<  ans << " ";
    

}