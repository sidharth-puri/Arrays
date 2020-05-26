#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,k;
    cin>>t;
    for(k=0;k<t;k++) {
        int n,x;
        cin>>n>>x;
        int arr[n],i,flag=0;
        unordered_set<int> s;
        for(i=0;i<n;i++) {
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            int tofind=x-arr[i];
            if(s.find(tofind)!=s.end()) {
                cout<<"Yes\n";
                flag=1;
                break;
            }
            
            s.insert(arr[i]);
            
        }
        if(flag==0)
        cout<<"No\n";
    }
}
