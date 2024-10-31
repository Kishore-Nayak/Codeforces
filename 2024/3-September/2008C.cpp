#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        int count = 0;
        long long d = 1;
        while(l <= r){
            count++;
            l += d;
            d++;
        }
        cout<<count<<endl;
    }
    return 0;
}