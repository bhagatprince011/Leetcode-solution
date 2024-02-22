class Solution {
public:
bool containsDuplicate(vector<int>& v) {
    sort(v.begin(),v.end());
    int n=v.size();
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            return 1;
        }
    }return 0;
}
};
