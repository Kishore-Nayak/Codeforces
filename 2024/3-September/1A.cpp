#include <bits/stdc++.h>
using namespace std;
int main(){
    long long m,n,a;
    cin>>m>>n>>a;
    long long x = (n+a-1)/a;
    long long y = (m+a-1)/a;
    cout<<(long long)x*y<<endl;
    return 0;
}