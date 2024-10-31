#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,el;
    cin>>t;
    while(t--){
        cin>>n;
        unordered_map<int,int> m;
        bool flag = true;
        while(n--){
            cin>>el;
            m[el]++;
        }
        if(m[1]%2==0 && m[2]%2==0){
            cout<<"YES"<<endl;
            flag = false;
        }
        else if(m[2]%2==1){
            if(m[1]>=2 && m[1]%2==0){
                cout<<"YES"<<endl;
                flag = false;
            }
        }
        if(flag) cout<<"NO"<<endl;
    }
    return 0;
}