#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,count = 0;
    cin>>p;
    while(p--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c > 1) count++;
    }
    cout<<count<<endl;
    return 0;
}