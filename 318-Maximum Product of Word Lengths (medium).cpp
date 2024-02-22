class Solution {
public:
    int getstate(string w1){
    long long h=0;
    for(int i=0;w1[i]!='\0';i++){
        long long a=1;
        a = a<<(w1[i]-97);
        h = a|h;      

    }
    return h;
}


int maxProduct(vector<string>& words) {
    
    int ans=0;
    int n= words.size();
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(getstate(words[i]));
        
    }    

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((v[i] & v[j])==0){
                int prod = words[i].size()*words[j].size();
                ans =max(ans,prod);                
            }
        }
    }
    

 return ans;   
}
};
