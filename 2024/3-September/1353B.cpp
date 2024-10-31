#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        vector<int> b(n);
        for(int i=0; i<n; i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0; i<k; i++){
            if(a[i] < b[i]) swap(a[i],b[i]);
        }
        long sum = 0;
        for(int i=0; i<n; i++) sum += a[i];
        cout<<sum<<endl;
    }
    return 0;
}