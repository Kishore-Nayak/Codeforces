#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long arr[n];
        int m=0;
        while(m<n)
        {
            cin>>arr[m];
            m++;
        }
        int left,right;
        long max=arr[0];
        for(int i=0; i<n; i++)
        {
            left=i;
            right=n-1-i;
            if(left%2==0 && right%2==0)
            {
                if(arr[i]>max) max=arr[i];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}