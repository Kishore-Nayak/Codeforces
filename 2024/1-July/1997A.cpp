#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,ans="";
        cin>>str;
        int x=str.size();
        bool flag=true;
        for(int i=1; i<x; i++)
        {
            if(str[i]==str[i-1])
            {
                flag=false;
                ans += str.substr(0,i);
                if(str[i] != 'a') ans += 'a';
                else if(str[i] != 'b') ans += 'b';
                ans += str.substr(i);
                break;
            }
        }
        if(flag)
        {
            ans = str;
            if(str[x-1] != 'a') ans += 'a';
            else if(str[x-1] != 'b') ans += 'b';
        }
        cout<<ans<<endl;
    }
    return 0;
}