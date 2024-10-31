#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n = str.length();
        if(n%2 != 0) cout<<"NO"<<endl;
        else{
            string s1 = str.substr(0,n/2);
            string s2 = str.substr(n/2);
            if(s1 == s2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}