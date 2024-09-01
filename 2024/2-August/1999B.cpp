#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,result = 0;
        cin>>a>>b>>c>>d;
        if(a>=c && b>d) result += 2;
        else if(a>c && b>=d) result += 2;
        if(a>=d && b>c) result += 2;
        else if(a>d && b>=c) result += 2;
        cout<<result<<endl;
    }
    return 0;
}