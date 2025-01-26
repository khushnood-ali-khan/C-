// class01.cpp.cpp
// demonstrates a small, simple object
#include<iostream>
#include<conio.h>
using namespace std;
class smallobj		 //declare a class
{
private:
int somedata;		 //class data
public:
    void setdata(int d)		 //member function to set data
    {
        somedata = d; 
    }
    void showdata()		 //member function to display data
    {
         cout <<"Data is " << somedata << endl; 	
    }
};
int main()
{
    smallobj s1; 		//define  object of class smallobj
    s1.setdata(1066);		 //call member function to set data
    s1.showdata(); 		//call member function to display data
    getch();
    return 0;   
}
