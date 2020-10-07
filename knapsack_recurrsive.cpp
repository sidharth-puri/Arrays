#include <iostream>
using namespace std;

int knapsack(int v[],int wt[], int W, int n) {
    if(n == 0 || W == 0) {
        return 0;
    }
    
    if(wt[n]<=W) {
        return max( v[n] + knapsack(v,wt,W-wt[n],n-1), knapsack(v,wt,W,n-1) );
    }
    
    if(wt[n]>W) {
        return knapsack(v,wt,W,n-1);
    }
}


int main() {
	int t,k;
	cin>>t;
	for(k=0;k<t;k++) {
	    int n,W,i;
	    cin>>n>>W;
	    int wt[n+1],v[n+1];
	    for(i=0;i<n+1;i++) {
	        cin>>wt[i];
	    }
	    for(i=0;i<n+1;i++) {
	        cin>>v[i];
	    }
	    cout<<knapsack(v,wt,W,n)<<"\n";
	}
}
