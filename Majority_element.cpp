#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,k;
    cin>>t;
    for(k=0;k<t;k++) {
        int n;
        cin>>n;
        int arr[n],i,flag=0;
        map<int,int> m;
        for(i=0;i<n;i++) {
            cin>>arr[i];
        }
        for(i=0;i<n;i++) {
            m[arr[i]]++;
        }
        for(auto x:m) {
            if(x.second>n/2) {
                cout<<x.first<<endl;
                flag=1;
            }
        }
        if(flag==0) {
            cout<<-1<<endl;
        }
    }
}
