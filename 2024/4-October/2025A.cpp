#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
    //write your code here
    string s,t;
    cin>>s>>t;
    int m = s.length();
    int n = t.length();
    int i=0,j=0;
    while(s[i]==t[j] && i<m && j<n){
        i++;
        j++;
    }
    int count;
    if(i==0) count = m+n;
    else count = m+n-i+1;
    cout<<count<<endl;
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
