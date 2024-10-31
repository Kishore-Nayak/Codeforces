#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string ans = "";
        string str = "aeiou";
        int x = n/5;
        int y = n%5;
        for(int i=0; i<x; i++) ans += str;
        if(y) ans += str.substr(0,y);
        sort(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}