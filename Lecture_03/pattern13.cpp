#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the value of n" << endl;
    cin >> n ;
    int i = 1;
     char count = 'A';
    while(i <= n){
        int j = 1;
       
        while(j <= n){
        cout << count << " ";
        count = count + 1;
        j = j + 1;
        }
         cout << endl;
        i = i + 1;
    }
   
}

// 4
// A B C D 
// E F G H 
// I J K L 
// M N O P 