#include<bits/stdc++.h>
using namespace std;
struct gpa{
    double calulus, islamyat, electronic, programming, english, ict;
};
struct gpa grades(){
    gpa grading;
    cout<<"\nEnter Your Grading Values:\n Calculus: ";
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
    return grading;
}
int main(){
    int i,num;
    cout<<"The Number of GPA's You want to find: ";
    cin>>num;
    for(i=0;i<num;i++){
    gpa grading = grades();
    double gpa, total_point, total_hours=18;
    total_point=(grading.calulus*3)+(grading.electronic*3)+(grading.ict*3)+(grading.english*3)+(grading.islamyat*2)+(grading.programming*4);
    cout<<"\n Total point: "<<total_point<<"\n Total Hours: "<<total_hours<<endl;
    gpa=total_point/total_hours;
    cout<<"\n      GPA No "<<i+1<<" is: "<<gpa<<endl;
}
    system ("pause");
}