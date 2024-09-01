#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n>>str;
    int Anton=0,Danik=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='A') Anton++;
        else Danik++;
    }
    if(Anton>Danik) cout<<"Anton"<<endl;
    else if(Anton<Danik) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}