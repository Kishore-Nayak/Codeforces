#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

void solution(){
    //write your code here
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    
    int ans = 0;
    
    //column wise
    int minVal;
    for(int i=0; i<n; i++){
        minVal = INT_MAX;
        for(int x=0, y=i; x<n && y<n; x++, y++){
            minVal = min(minVal,v[x][y]);
        }
        if(minVal < 0) ans += abs(minVal);
    }
    
    //row wise
    for(int i=1; i<n; i++){
        minVal = INT_MAX;
        for(int x=i, y=0; x<n && y<n; x++, y++){
            minVal = min(minVal,v[x][y]);
        }
        if(minVal < 0) ans += abs(minVal);
    }
    
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
