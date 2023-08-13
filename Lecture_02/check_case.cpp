#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the value of ch" << endl;
    cin >> ch ;
    if(ch >= 'A' && ch <='Z'){
        cout << ch << " is an UpperCase character" << endl;
    }
    else if(ch >='a' && ch <='z'){
        cout << ch << " is an lowerCase character" << endl;
    }
    else
    {
        cout << ch << " is numberic or special character" << endl;
    }
    
}