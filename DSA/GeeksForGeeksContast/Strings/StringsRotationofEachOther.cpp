  bool areRotations(string &s1, string &s2) {
        // Your code here
        if(s1.length() != s2.length()){
            return false;
        }
        else{
            string ans = s1+s1;
            return ans.find(s2) != -1;
        }
    }