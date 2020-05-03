#include <iostream>
using namespace std;

int main() {
	long long int n,d,i;
	cin>>n>>d;
	long long int arr[n],max=-9999999999;
	for(i=0;i<n;i++){
	    cin>>arr[i];
	    if(arr[i]>max){
	        max=arr[i];
	    }
	}
	for(i=0;i<d;i++){
	    long long int t,a,b;
	    cin>>t>>a>>b;
	    if(t==1){
	        arr[a-1]+=b;
	        if(arr[a-1]>max){
	            max=arr[a-1];
	        }
	    }
	    else if(t==2){
	        if(arr[a-1]>arr[b-1]){
	            arr[a-1]+=arr[b-1];
	            arr[b-1]=0;
	            if(arr[a-1]>max){
	                max=arr[a-1];
	            }
	        }
	        else if(arr[b-1]>arr[a-1]){
	            arr[b-1]+=arr[a-1];
	            arr[a-1]=0;
	            if(arr[b-1]>max){
	                max=arr[b-1];
	            }
	        }
	    }
	    cout<<max<<endl;
	}
}
