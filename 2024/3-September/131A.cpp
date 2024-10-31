#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool first = true;
    bool second = true;
    for(int i=0; i<str.size(); i++){
        if(str[i]>=65 && str[i]<=90) continue;
        else{
            first = false;
            break;
        }
    }
    if(str[0]>=65 && str[0]<=90) second = false;
    else if(str[0]>=97 && str[0]<=122){
        for(int i=1; i<str.size(); i++){
            if(str[i]>=65 && str[i]<=90) continue;
            else{
                second = false;
                break;
            }
        }
    }
    if(first || second){
        for(int i=0; i<str.size(); i++){
            if(str[i]>=65 && str[i]<=90) str[i]=str[i]+32;
            else str[i]=str[i]-32;
        }
    }
    cout<<str<<endl;
    return 0;
}