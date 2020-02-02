vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int i,j,sum=0,k=0,m=A.size()-1,n=A.size()-1;
    vector<vector<int>> arr;
    vector<int> a;
    for(i=0;i<=m;i++){
        int y=i;
        int x=0;
        a.push_back(A[x][y]);
       
        while(y!=0){
             x++;
             y--;
            a.push_back(A[x][y]);
        }
        arr.push_back(a);
        a.clear();
    }
     for(i=1;i<=n;i++){
        int y=m;
        int x=i;
        a.push_back(A[x][y]);
      
        while(x!=m){
              x++;
              y--;
            a.push_back(A[x][y]);
        }
        arr.push_back(a);
        a.clear();
    }
    return arr;
}
