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
int calu(){
    int i,num;
    string name;
    cout<<"\nThe Number of GPA's You want to find: ";
    cin>>num;
    cin.ignore();
    for(i=0;i<num;i++){
    cout<<"\nEnter Student name: ";
    getline(cin,name);
    gpa grading = grades();
    double gpa, total_point, total_hours=18;
    total_point=(grading.calulus*3)+(grading.electronic*3)+
                (grading.ict*3)+(grading.english*3)+
                (grading.islamyat*2)+(grading.programming*4);
                
    cout<<"\n Total point: "<<total_point<<"\n Total Hours: "<<total_hours<<endl;
    gpa=total_point/total_hours;
    cout<<"\n      Student "<<i+1<<" "<<name<<" GPA is: "<<gpa<<endl;
    // name=nullptr;
}}
int main(){
    calu();
    char option;
    while(true){
    cout<<"\n Do you want to continue Y/N: ";
    cin>>option;
        if(option=='y'|| option=='Y'){
    calu();}
    else{break;}
    }
    system ("pause");
}