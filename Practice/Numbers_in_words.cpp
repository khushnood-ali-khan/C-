#include<iostream>
using namespace std;
main(){
    int digit;
    int a;
    cout<<"Enter a Single Digits: ";
    cin>>digit;
    a=(digit>=0&&digit<=9);
    switch(a){
        case '0':
        cout<<"The Number is Zero.";
        break;
    }
}