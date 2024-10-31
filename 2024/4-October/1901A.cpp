#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
    //write your code here
    int n,x,el;
    cin>>n>>x;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>el;
        v.push_back(el);
    }
    int ans = 0;
    for(int i=1; i<n; i++) ans = max(ans, v[i]-v[i-1]);
    ans = max(ans, v[0]);
    ans = max(ans, 2*(x-v[n-1]));
    cout<<ans<<endl;
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
