#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
    //write your code here
    int n,el;
    cin>>n;
    int count = 0;
    for(int i=0; i<(2*n); i++){
        cin>>el;
        if(el==1) count++;
    }
    
    if(n==1 && count==2) {
        cout<<0<<" "<<0<<endl;
        return;
    }
    
    //minimum
    cout<<count%2<<" ";
    //maximum
    if(count >= n) cout<<n-(count-n)<<endl;
    else cout<<count<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //for calculating run time
    clock_t z = clock();
    
    //no of testcases
    int t = 1;
    cin>>t;
    
    //initiating loop for every test case
    while(t--) solution();
    
    cerr<<"Run Time : "<<((double)(clock()-z)*1000/CLOCKS_PER_SEC)<<" ms";

    return 0;
}
