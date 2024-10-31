#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define float long double

bool isSubSequence(string s,string t){
    int m = s.length();
    int n = t.length();
    int i=0,j=0;
    while(i<m && j<n){
        if(s[i]==t[j]){
            j++;
        }
        i++;
    }
    if(j==n) return true;
    return false;
}

void solution(){
    //write your code here
    string s,t;
    cin>>s>>t;
    if(s.length() < t.length()){
        cout<<"NO"<<endl;
        return;
    }
    int m = s.length();
    int n = t.length();
    int i=0,j=0;
    while(i<m){
        j = j%n;
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else if(s[i]=='?'){
            s[i] = t[j];
            i++;
            j++;
        }
        else i++;
    }
    if(isSubSequence(s,t)){
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
    else cout<<"NO"<<endl;
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
