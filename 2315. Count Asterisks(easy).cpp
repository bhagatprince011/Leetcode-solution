class Solution {
public:
    int countAsterisks(string s) {
        int count=0;
        int border=0;
        stack<int> st;
        st.push(0);
        for(int i=0;i<s.size();i++){
            if(st.top()==0){
                if(s[i]=='*'){
                    count++;
                }
            }
            if(border==0 and s[i]=='|'){
                st.push(1);
                border++;
            }
            else if(border==1 and s[i]=='|'){
                st.pop();
                border--;
            }
        }
        return count;
        
    }
};
