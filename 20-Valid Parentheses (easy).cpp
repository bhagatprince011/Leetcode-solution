class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('#');
        if(s.size()==1){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }else{
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(st.top()=='['){
                    st.pop();
                }else{
                    return false;
                }
            }
            
        }
        return st.top()=='#'?true:false;
    }
};
