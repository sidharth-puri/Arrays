#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t,k;
	cin>>t;
	for(k=0;k<t;k++) {
	    int n,i;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++) {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(i=0;i<n-1;i=i+2){
	        int t;
	        t=arr[i];
	        arr[i]=arr[i+1];
	        arr[i+1]=t;
	    }
	   
	    int len=0;
	     int max=-99999;
	   for(i=0;i<n;i++) {
	       while(arr[i]%2==0){
	           ++len;
	           ++i;
	            if(len>max){
	                max=len;
	            }
	           if(i>=n){
	               break;
	           }
	       }
	       len=0;
	        if(len>max){
	                max=len;
	            }
	       
	    }
	    cout<<max<<endl;
	}
}
