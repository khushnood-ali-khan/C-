/*
write a program to calculate and print the product of the even numbers from 1 to 12 by using the "while" loop.
*/
#include<iostream>
using namespace std;
int main(){
    int i=1,multiplies=1;
    while (i<=12){
        if(i%2==0){
            multiplies*=i;
        }
        i++;
    }
    cout<<multiplies;
}