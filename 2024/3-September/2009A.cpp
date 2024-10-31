#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long result=INT_MAX;
        int a,b;
        cin>>a>>b;
        // for(int c=a; c<=b; c++){
        //     long temp = (c-a)+(b-c);
        //     result = min(result,temp);
        // }
        cout<<b-a<<endl;    //(c-a)+(b-c)=b-a
        cout<<result<<endl;
    }
    return 0;
}