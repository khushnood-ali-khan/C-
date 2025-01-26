#include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter Your Test Marks: ";
    cin>>marks;
    if (marks){
        if(marks>=90){
        cout<<"Your Grade is A+.";
        }
    else if(marks>=70){
        cout<<"Your Grade is A.";
    }
    else if (marks>=50){
        cout<<"Your Grade is B";
    }
    else{
        cout<<"Your Grade is F.";
    }
    }
}