/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* subUnsort(int* A, int n1, int *len1) {
    int i,start=-1,end;
    int* arr=(int*)malloc(sizeof(int)*2);
    for(i=0;i<n1;i++){
        if(A[i]<A[i-1]){
            start=i-1;
            break;
        }
    }
    if(start==-1){
        *len1=1;
        arr[0]=-1;
        return arr;
    }
    for(i=n1-1;i>=0;i--){
        if(A[i]<A[i-1]){
            end=i;
            break;
        }
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(i=start;i<=end;i++){
        if(A[i]<min){
            min=A[i];
        }
        if(A[i]>max){
            max=A[i];
        }
    }
    for(i=0;i<start;i++){
        if(A[i]>min){
            start=i;
        }
    }
    for(i=end;i<n1;i++){
        if(A[i]<max){
            end=i;
        }
    }
    *len1=2;
    arr[0]=start;
    arr[1]=end;
    return arr;
}
