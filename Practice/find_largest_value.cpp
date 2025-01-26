#include<iostream>
using namespace std;
int main(){
    long long Value1,Value2,Value3,Value4;
    long long all;
    cout<<"Enter the First Value: ";
    cin>>Value1;
    cout<<"Enter the Second Value: ";
    cin>>Value2;
    cout<<"Enter the Third Value: ";
    cin>>Value3;
    cout<<"Enter the Fourth Value: ";
    cin>>Value4;
    if (Value1){
        if (Value1>=Value2 && Value1>=Value3 && Value1>=Value4)
        {
            cout<<Value1<<" is the Largest Value.";
        }
        else if (Value2>=Value1&&Value2>=Value3&&Value2>=Value4)
        {
            cout<<Value2<<" is the Largest Value.";
        }
        else if (Value3>=Value1&&Value3>=Value2&&Value3>=Value4)
        {
            cout<<Value3<<" is the Largest Value.";
        }
        else if (Value4>=Value1&&Value4>=Value2&&Value4>=Value3)
        {
            cout<<Value4<<" is the Largest Value.";
        }
    }
    // else if (Value2){
         
    // }
    // else if (Value3){
        
    // }
    // else if (Value4){
        
    // }
}