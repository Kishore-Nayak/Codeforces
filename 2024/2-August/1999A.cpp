#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,result=0;
        cin>>n;
        while(n)
        {
            result += n%10;
            n /= 10;
        }
        cout<<result<<endl;
    }
    return 0;
}