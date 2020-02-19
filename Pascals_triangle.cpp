vector<vector<int> > Solution::solve(int A) {
   vector<vector<int> > arr; 
    int count=1,j,i;
    for(i=0;i<A;i++)
    {
        vector<int> a; 
        for(j=0;j<=i;j++) {
            if(j==i || i==0) {
                a.push_back(1);
            }
            else
            {
                 a.push_back(arr[i-1][j-1]+arr[i-1][j]);
            }
        }
        arr.push_back(a);
    }
    return arr;
}
