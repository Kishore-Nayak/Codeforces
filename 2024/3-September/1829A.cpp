#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str = "codeforces";
    string s;
    while(t--){
        cin>>s;
        int count = 0;
        for(int i=0; i<10; i++){
            if(str[i] != s[i]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}