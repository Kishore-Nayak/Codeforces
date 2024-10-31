#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<string,int> m;
    while(t--){
        string str;
        cin>>str;
        m[str]++;
    }
    int maxGoals = 0;
    for(auto it : m){
        maxGoals = max(maxGoals,it.second);
    }
    for(auto it : m){
        if(it.second==maxGoals){
            cout<<it.first<<endl;
            break;
        }
    }
    return 0;
}