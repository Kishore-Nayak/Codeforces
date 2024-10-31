#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
    //write your code here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxCount = 0;
    int count = 1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1] && s[i]=='.') count++;
        else{
            maxCount = max(maxCount,count);
            count = 1;
        }
    }
    maxCount = max(maxCount,count);
    
    if(maxCount >= 3) cout<<2<<endl;
    else{
        count = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='.') count++;
        }
        cout<<count<<endl;
    }
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
