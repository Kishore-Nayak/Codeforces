#include<bits/stdc++.h>
using namespace std;
long long largestPower(int n, int k){
    long long res = 1;
    while(res*k <= n) res *= k;
    return res;
}
int main(){
    long long t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k==1){
            cout<<n<<endl;
            continue;
        }
        int count = 0;
        while(n >= k){
            n -= largestPower(n,k);
            count++;
        }
        cout<<count+n<<endl;
    }
    return 0;
}