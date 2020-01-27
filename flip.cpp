vector<int> Solution::flip(string A) {
    vector<int> arr;
    vector<int> n;
    int i,count=0;
    for(i=0;i<A.length();i++){
        if(A[i]=='1'){
            arr.push_back(-1);
            count++;
        }
        else {
            arr.push_back(1);
        }
    }
    if(count==A.length()){
        return n;
    }
    int sum=0,k=0;
    int s=0,e,max=INT_MIN;
    for(i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum>max){
            max=sum;
            s=k;
            e=i;
        }
        if(sum<0){
           sum=0;
           k=i+1;
        }
    }
    vector<int> v;
    v.push_back(s+1);
    v.push_back(e+1);
    return v;
}
