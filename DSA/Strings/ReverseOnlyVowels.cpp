class Solution {
public:

    bool isVowels(char ch){
        ch = tolower(ch);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }

    string reverseVowels(string s) {
        int l=0;
        int h=s.size() - 1;
        
        while(l<=h){
            if(isVowels(s[l]) && isVowels(s[h])){
                swap(s[l], s[h]);
                l++, h--;
            }
            else if(!isVowels(s[l])){
                l++;
            }
            else{
                h--;
            }
        }
        return s;
    }
};