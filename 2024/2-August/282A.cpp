#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,result = 0;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str=="++X" || str=="X++") result++;
        else result--;
    }
    cout<<result<<endl;
    return 0;
}