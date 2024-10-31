#include <bits/stdc++.h>
using namespace std;
bool isLuckey(int val){
    string str = to_string(val);
    for(int i=0; i<str.size(); i++){
        if(str[i]=='4' || str[i]=='7') continue;
        else return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool flag = true;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(isLuckey(i) || isLuckey(n/i)){
                cout<<"YES"<<endl;
                flag = false;
                break;
            }
        }
    }
    if(flag) cout<<"NO"<<endl;
    return 0;
}