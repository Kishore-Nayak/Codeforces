#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,z,a,b,c;
    cin>>t;
    while(t--){
        cin>>x>>y>>z>>a>>b>>c;
        if(c >= max(a,b)) cout<<x-max(a,b)<<endl;
        else if(c <= min(a,b)) cout<<min(a,b)-1<<endl;
        else cout<<(a+b)/2 - min(a,b)<<endl;
    }
    return 0;
}