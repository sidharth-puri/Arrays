#include <iostream>
using namespace std;

int main() {
    int t,k;
    cin>>t;
    for(k=0;k<t;k++) {
        int i,n;
        cin>>n;
        int arr[n-1],sum=0;
        for(i=0;i<n-1;i++) {
            cin>>arr[i];
            sum+=arr[i];
        }
       int nsum=n*(n+1)/2;
        cout<<nsum-sum<<endl;
    }
}
