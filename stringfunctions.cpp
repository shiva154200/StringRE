#include<iostream>
#include<string>
using namespace std;

int main() {

    string s="Hello World";

    // cout<<s.empty()<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // cout<<s.length()<<endl;
    // s.clear();
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // cout<<s.empty()<<endl;

    s.resize(15);
    // s.push_back('a');
    // s.append("abc");

    s.insert(6,"Ram");

    s.erase(6,3);

    s.replace(6,5,"Shivam");

    cout<<s;

    
}