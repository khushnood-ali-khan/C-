/*
write a program that take a single digit as in input and print it in words
example: if user enter 0 the output should be "Zero".

*/
#include<iostream>
using namespace std;
main(){
    int digit;
    cout<<"Enter a Single Digit: ";
    cin>>digit;
    switch (digit)
    {
    case '0':
        cout<<"The Digit is Zero.";
        break;
    // case '1':
    //     cout<<"The Digit is One";
    //     break;
    // case '2':
    //     cout<<"The Digit is Two";
    //     break;
    // case '3':
    //     cout<<"The Digit is Three";
    //     break;
    // case '4':
    //     cout<<"The Digit is Four";
    //     break;
    // case '5':
    //     cout<<"The Digit is Five";
    //     break;
    // case '6':
    //     cout<<"The Digit is Six";
    //     break;
    // case '7':
    //     cout<<"The Digit is Seven";
    //     break;
    // case '8':
    //     cout<<"The Digit is Eight";
    //     break;
    // case '9':
    //     cout<<"The Digit is Nine";
    //     break;
    
    // default:
    // cout<<"Try Agian";
    //     break;
    }
    return 0;
}