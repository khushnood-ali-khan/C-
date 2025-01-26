/*
write a program to print the sum of odd number of the first ten natural numbers using do-while loop. 
*/
#include<iostream>
using namespace std;
int main (){
    int i=1,sum=0;
    do{
        if (i%2!=0){
            sum+=i;
        }
        i++;
    }while (i<=10);
    cout<<sum;
}