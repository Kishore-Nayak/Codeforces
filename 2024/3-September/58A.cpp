#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string s = "hello";
    int j = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i]==s[j] && j<5) j++;
    }
    if(j == 5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}