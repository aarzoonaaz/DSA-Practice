#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, rem ;
    cout << "Enter the value of n" << endl;
    cin >> n ;
    int ans = 0;
    while (n != 0){
        int rem = n% 10;
        
          ans = ans * 10 + rem;
          n = n/10;
        
    }
    cout << ans << endl;     

}
