#include<iostream>
using namespace std;
int main(){
    int a = 1 , b = 2;
    if(a-- > 0 || b++ > 2){
        cout << "1" << endl;
    }
    else
    {
        cout<< "2" << endl;
    }
    cout << a << " " << b << endl;
    
}