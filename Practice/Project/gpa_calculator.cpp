#include<bits/stdc++.h>
using namespace std;
struct gpa{
    double calulus, islamyat, electronic, programming, english, ict;
};
int main(){
    gpa grading;
    cout<<"Enter Your Grading Values:\n Calculus: ";
    cin>>grading.calulus;
    cout<<" Islamyat: ";
    cin>>grading.islamyat;
    cout<<" Electronic: ";
    cin>>grading.electronic;
    cout<<" Programming: ";
    cin>>grading.programming;
    cout<<" English: ";
    cin>>grading.english;
    cout<<" ICT: ";
    cin>>grading.ict;
    cout<<endl;
    double gpa , total_point, total_hours=18;
    total_point=(grading.calulus*3)+(grading.electronic*3)+(grading.ict*3)+(grading.english*3)+(grading.islamyat*2)+(grading.programming*4);
    cout<<"Total Points: "<<total_point<<"\nTotal Hours: "<<total_hours;
    gpa=total_point/total_hours;
    cout<<"\nYour GPA is: "<<gpa;
}
// int calcu(){
//     grades();
    // int credit=3, credit_1=2, credit_2=4,gpa, total_point, total_hours;
    // total_point=(grading.calculus*credit)+(grading.electronic*credit)+(grading.ict*credit)+(grading.english*credit)+(grading.islamyat*credit_1)+(grading.programming*credit_2);
    // total_hours=18;
    // gpa=total_point/total_point;
    // cout<<"Your GPA is: "<<gpa;
// }
// main(){
//     grades();
//     calcu();
// }