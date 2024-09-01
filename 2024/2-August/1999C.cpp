#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        vector<int> v;
        bool flag = true;
        v.push_back(0);
        for(int i = 0; i < 2*n; i++)
        {
            int el;
            cin>>el;
            v.push_back(el);
        }
        v.push_back(m);
        for(int i = 1; i < v.size(); i += 2)
        {
            if(v[i]-v[i-1] >= s)
            {
                cout<<"YES"<<endl;
                flag = false;
                break;
            }
        }
        if(flag) cout<<"NO"<<endl;
    }
    return 0;
}