/* Write a program that takes a character as input and checks if it is a vowel or consonant. 
If the character is a vowel, print “The character is a vowel.” Otherwise, print “The character is a consonant.” */
#include<iostream>
using namespace std;
int main(){
    char c;
    char vowe,upper;
    cout<<"Enter a Character: ";
    cin>>c;
    vowe = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upper = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (vowe || upper)
    {
        cout<<"The Character is Vowel. ";
    }
    else{
        cout<<"The Character is Consonant. ";
    }
    return 0;
}