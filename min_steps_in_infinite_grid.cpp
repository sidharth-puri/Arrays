int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count=0,i;
    for(i=1;i<A.size();i++){
        int difx=abs(A[i]-A[i-1]);
        int dify=abs(B[i]-B[i-1]);
        count+=max(difx,dify);
    }
    return count;
}
