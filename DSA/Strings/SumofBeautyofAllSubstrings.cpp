class Solution {
public:
    int beautySum(string s) {
        int beautySum = 0;
        unordered_map<char, int> mp;

        // Find all Substrings
        for(int i=0; i<s.size(); i++){
            //to clear map after 1st itertion of i
            mp.clear();
            for(int j=i; j<s.size(); j++){
                char &ch = s[j];
                //frequency update of char ch
                mp[ch]++;

                int mini = INT_MAX;
                int maxi = INT_MIN;

                //find most and least frequent ch from thr map

                for(auto each:mp){
                    maxi = max(maxi, each.second);
                    mini = min(mini, each.second);
                } 
                int beauty = maxi - mini;
                    beautySum += beauty;
            }
        }
        return beautySum;
    }
};