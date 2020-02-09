bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int i=0,j=0,count=0;
    while(i<arrive.size() && j<depart.size()){
        if(arrive[i]<depart[j]){
            i++;
            count++;
        }
        else {
            j++;
           count--;
        }
             if(count>K){
            return 0;
        }
    }

    return 1;
}
