#include <iostream>
using namespace std;

int main() {
	int t,k;
	cin>>t;
	for(k=0;k<t;k++) {
	    int n,m;
	    cin>>n>>m;
	    int i,arr[n],max=-99999;
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    if(max>=m){
	        cout<<max<<endl;
	    }
	    else {
	        cout<<"RESIGN\n";
	    }
	}
}
