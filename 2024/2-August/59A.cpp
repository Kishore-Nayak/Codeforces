#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ans="";
    cin>>s;
    int lo=0,up=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=65 && s[i]<=90) up++;
        else lo++;
    }
    if(lo>=up){
        for(int i=0; i<s.size(); i++){
            if(s[i]>=65 && s[i]<=90) ans += s[i]+32;
            else ans += s[i];
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            if(s[i]>=97 && s[i]<=122) ans += s[i]-32;
            else ans += s[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}