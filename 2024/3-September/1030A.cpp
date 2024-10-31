#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,el;
    cin>>t;
    bool flag=true;
    while(t--){
        cin>>el;
        if(el==1){
            cout<<"HARD"<<endl;
            flag=false;
            break;
        }
    }
    if(flag) cout<<"EASY"<<endl;
    return 0;
}