#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int target=arr[k-1];
    for(int i=0; i<n; i++){
        if(arr[i]>0 && arr[i]>=target) count++;
        else break;
    }
    cout<<count<<endl;
    return 0;
}