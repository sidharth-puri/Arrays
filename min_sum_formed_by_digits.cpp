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
	    int num1=0,num2=0;
	    for(i=0;i<n;i++) {
	        if(i%2==0){
	            num1=num1*10+arr[i];
	        }
	        else {
	            num2=num2*10+arr[i];
	        }
	    }
	    cout<<num1+num2<<endl;
	}
}
