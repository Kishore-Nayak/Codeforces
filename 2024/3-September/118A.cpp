#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str = "";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y') continue;
        else if(s[i]>=65 && s[i]<=90) str = str+'.'+char(s[i]+32);
        else if(s[i]>=97 && s[i]<=122) str = str+'.'+s[i];
    }
    cout<<str<<endl;
    return 0;
}