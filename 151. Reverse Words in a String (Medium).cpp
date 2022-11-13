class Solution {
public:
    string reverseWords(string s) {
        vector<string> ar;
        string word="";        
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word += s[i];  
                if(s[i+1]==' ' or i==(s.size()-1) ){
                    ar.push_back(word);
                    word= "";
                }               
            }                       
        }        
        for(int i=ar.size()-1;i>=0;i--){
            word+=ar[i];
            word+=' ';
        }
        word.pop_back();
        return word;
    }
};
