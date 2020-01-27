vector<int> Solution::plusOne(vector<int> &A) {
    int i,n=A.size(),carry=0;
    A[n-1]+=1;
    if(A[n-1]<=9){
        
    }
    else {
        A[n-1]=0;
        carry=1;
    for(i=n-2;i>=0;i--){
        if(A[i]+1>9){
            A[i]=0;
            carry=1;
        }
        else {
            A[i]=A[i]+1;
            carry=0;
            break;
        }
    }
    }
    if(carry==1){
        A.insert(A.begin(),carry);
    }
    auto itr=A.begin();
    while(*itr==0){
        A.erase(A.begin());
    }
    return A;
}
