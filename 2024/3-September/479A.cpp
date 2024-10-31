#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    long p = a+b*c;
    long q = a*(b+c);
    long r = a*b*c;
    long s = (a+b)*c;
    long t = a*b+c;
    long u = a+b+c;
    cout<<max(max(max(p,q),max(r,s)),max(t,u))<<endl;
    return 0;
}