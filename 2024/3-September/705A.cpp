#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str = "";
    for(int i=1; i<=n; i++){
        str += "I ";
        if(i%2!=0) str += "hate ";
        else str += "love ";
        if(i!=n) str += "that ";
    }
    str += "it";
    cout<<str<<endl;
    return 0;
}