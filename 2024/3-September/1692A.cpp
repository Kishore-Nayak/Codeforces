#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        int count = 0;
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;
        cout<<count<<endl;
    }
    return 0;
}