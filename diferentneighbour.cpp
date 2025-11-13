//  Input a string and return the
// number of times the neighbouring characters are
// different from each other.

#include<iostream>
#include<string>
using namespace std;

int main() {

    string s;

    cout<<"Enter String ";
    getline(cin,s);

    int c=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]) c++;
    }

    cout<<"Count Of Same Neighbours Is:"<<c;
}