    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int i=0,j=0,k=0;
        vector<int> c(n+m);
        for(int l=0;l<n;l++){
            A.pop_back();
        }
        while(i<m && j<n){
            if(A[i]<B[j]){
                c[k++] = A[i++];
            }else{
                c[k++] = B[j++];
            }
        }
        for( ;i<m;i++){
            c[k++]=A[i];
        }
        for( ;j<n;j++){
            c[k++]=B[j];
        }
        A=c;
    }
