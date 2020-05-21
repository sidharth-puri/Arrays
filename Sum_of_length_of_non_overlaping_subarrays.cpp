#include <iostream>
using namespace std;

int main() {
    int t,k;
    cin>>t;
    for(k=0;k<t;k++) {
        int n;
        cin>>n;
        int arr[n],i,k;
        for(i=0;i<n;i++) {
            cin>>arr[i];
        }
        cin>>k;
        int count=0;
        for(i=0;i<n;i++) {
           if(arr[i]==k) {
               int l=i-1;
               while(arr[l]<k && l>=0) {
                   count++;
                   l--;
               }
               int r=i+1;
               while(arr[r]<k && r<n) {
                   count++;
                   r++;
               }
               count++;
           }
        }
        cout<<count<<endl;
    }
}
