/* Write a program that take a single character as in input if the character is equal to "m" print
you are a male and if the character is equal to "f" print that you are a female .*/
#include<iostream>
using namespace std;
main()
{
    char gender;
    cout<<"Enter Your Gender M or F: ";
    cin>>gender;
    if(gender=='m'|| gender=='M'){
        cout<<"Your are a Male. ";
    }
    else if (gender=='f'|| gender=='F'){
        cout<<"Your are a Female. ";
    }
    
}
