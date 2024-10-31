#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int officers = 0;
    for(int i=0; i<n; i++){
        if(officers==0 && arr[i]==-1) ans++;
        else if(officers>0 && arr[i]==-1) officers--;
        else officers += arr[i];
    }
    cout<<ans<<endl;
    return 0;
}