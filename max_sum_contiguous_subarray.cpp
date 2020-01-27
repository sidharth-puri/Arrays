int Solution::maxSubArray(const vector<int> &A) {
    int i,sum=0,max=INT_MIN;
    for(i=0;i<A.size();i++){
        sum+=A[i];
         if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return max;
}
