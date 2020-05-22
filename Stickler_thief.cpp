#include <bits/stdc++.h>
using namespace std;

int thief(int arr[],int n){
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return arr[0];
    }
    if(n==2) {
        return max(arr[0],arr[1]);
    }
    int dp[n],i;
    dp[0]=arr[0];
    dp[1]=max(dp[0],arr[1]);
    for(i=2;i<n;i++) {
        dp[i]= max(dp[i-2]+arr[i],dp[i-1]);
    }
    return dp[n-1];
}

int main() {
    int t,k;
    cin>>t;
    for(k=0;k<t;k++) {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++) {
            cin>>arr[i];
        }
        cout<<thief(arr,n)<<endl;
    }
}
