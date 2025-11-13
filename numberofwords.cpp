#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int words(string &s){
    int c=0;

    for(int i=0;i<s.size();i++){
        while(i<s.size()&&s[i]==' ') i++;
        if(i==s.size()) break;
        while(i<s.size()&&s[i]!=' ') {
            i++;
        }
        c++;
    }
      return c;
}

void printwords(string& s){
    for(int i=0;i<s.size();i++){
        while(i<s.size()&&s[i]==' ') i++;
        if(i==s.size()) break;
        while(i<s.size()&&s[i]!=' ') {
            cout<<s[i];
            i++;

        }
        cout<<endl;
        
    }
}

void mosttimesword(string& s){
      vector<string>vt;
  for(int i=0;i<s.size();i++){
      
        while(i<s.size()&&s[i]==' ') i++;
        if(i==s.size()) break;
        string k="";
        while(i<s.size()&&s[i]!=' ') {
            k.push_back(s[i]);
            i++;

        }
        vt.push_back(k);
        
    }

    sort(vt.begin(),vt.end());

    string m=vt[0];
    string mx=vt[0];
    int ct=0;
    int mxc=0;
    for(int i=0;i<vt.size();i++){
        if(vt[i]==m) ct++;
        else{
            if(mxc<ct) {
                mxc=ct;
                mx=m;

            
            }
            ct=1;
            m=vt[i];
            
        }

    }
     if (mxc < ct) {
        mxc = ct;
        mx = m;
    }
    cout<<"Maxtime Occured String"<<mx;



}
int main(){
    string s="    j    hj hj  jjrfd dujdgd  ubff dufbfij";
    cout<<"Enter String :";
    getline(cin,s);

  
    mosttimesword(s);
    // cout<<words(s);
    // printwords(s);
}
