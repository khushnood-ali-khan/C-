/*
    IT (Evening) 1st Semster
    Name: Khushnood Ali Khan
    Rollno: 36
*/

#include<iostream>
using namespace std;
void texCalulator(){
    int income,tax1,tax2,tax3;
    cout<<"Enter Your Income: ";
    cin>>income;
    if(income>=100000){
        tax1=income/100*5;
    }
    else if(income>=500000){
        tax2=income/100*10;
    }
    else if (income>=1000000){
        tax3=income/100*20;
    }
    else{
        cout<<"You have to Pay tax.";
    }
    cout<<"Your Tax is "<<tax1<<tax2<<tax3;
}
int main(){
    texCalulator();
}