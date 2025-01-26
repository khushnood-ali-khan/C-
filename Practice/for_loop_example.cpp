/*
write a program to print the sum of odd number of the first ten natural numbers using for loop. 
*/
#include<iostream>
using namespace std;
int main (){
    int i=1,sum=0;
    for (i;i<=10;i++){
        if (i%2!=0){
            sum+=i;
        }
    }
    cout<<sum;
}