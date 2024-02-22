class Solution {
public:
    int search(vector<int>& v, int target) {
        int start=0;
        int end=v.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==v[mid]){
                return mid;
            }
            else if(target<v[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
        
    }
};
