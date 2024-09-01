#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n){
        int temp = n%10;
        if(temp==4 || temp==7) count++;
        n /= 10;
    }
    if(count==4 || count==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}