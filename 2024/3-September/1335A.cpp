#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long el;
        cin>>el;
        if(el%2==0) cout<<el/2-1<<endl;
        else cout<<el/2<<endl;
    }
    return 0;
}