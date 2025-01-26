#include<iostream>
using namespace std;
main(){
    char character,upper,lower;
    cout<<"Enter a Single Alphabet: ";
    cin>>character;
    // upper=(character=='A'||character=='E'||character=='I'||character=='O'||character=='U');
    // lower=(character=='a'||character=='e'||character=='i'||character=='o'||character=='u');
    switch (character){
        case 'a': case 'A': case 'e': case 'E':
        case 'i':case 'I':case 'o':case 'O':
        case 'u':case 'U':
        cout<<"The Alphabet is Vowle.";
        break;
        default:
        cout<<"The Alphabet is Not an Vowle.";
        break;
        // case 'e'||'E':
        // cout<<"The Character is Vowle: ";
        // break;
        // case 'i'||'I':
        // cout<<"The Character is Vowle: ";
        // break;
        // case 'O'||'o':
        // cout<<"The Character is Vowle: ";
        // break;
        // case 'u'||'U':
        // cout<<"The Character is Vowle: ";
        // break;
    }
}