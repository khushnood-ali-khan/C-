/*
    Write a program to output as given below by using "while" loop and setw manupulator.
    ******
     *****
      ****
       ***
        **
         *
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i=1,j=1;
    while (i<=6){
        cout<<setw(4)<<"*";
        while (j<=i){
            cout<<setw(3)<<"*";
            j++;
        }
        i++;
    }

}