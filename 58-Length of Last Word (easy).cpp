    int lengthOfLastWord(string s) {
        while(s[s.length()-1] == ' ')
            {   s.pop_back();
            }
        
        
        int n=s.length()-s.rfind(" ")-1;
        return n;
        
    }
