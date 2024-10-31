#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q;
    cin>>n;
    cin>>p;
    bool flag=true;
    unordered_set<int> s;
    while(p--){
        int el;
        cin>>el;
        s.insert(el);
    }
    cin>>q;
    while(q--){
        int el;
        cin>>el;
        s.insert(el);
    }
    for(int i=1; i<=n; i++){
        if(s.find(i)==s.end()){
            cout<<"Oh, my keyboard!"<<endl;
            flag=false;
            break;
        }
    }
    if(flag) cout<<"I become the guy."<<endl;
    return 0;
}