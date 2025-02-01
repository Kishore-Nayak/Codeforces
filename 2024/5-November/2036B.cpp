#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

bool customComparator(pair<int, int> a,pair<int, int> b){
    return a.second > b.second;
}

void solution(){
    //write your code here
    int n,k;
    cin>>n>>k;
    unordered_map<int,int> mp;
    for(int i=0; i<k; i++){
        int b,c;
        cin>>b>>c;
        mp[b] += c;
    }
    vector<pair<int, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), customComparator);
    int ans = 0;
    int i=0;
    while(i<n && i<vec.size()){
        ans += vec[i].second;
        i++;
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
