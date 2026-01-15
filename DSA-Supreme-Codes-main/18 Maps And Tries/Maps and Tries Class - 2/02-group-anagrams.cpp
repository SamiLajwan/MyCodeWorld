// leetcode 49. Group Anagrams
//complete the code
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string> > map;

        for(int i = 0; i < strs.size(); i++){
            string original = strs[i];
            string copy = strs[i];
            sort(copy.begin(), copy.end());
            map[copy].push_back(original);
        }
        vector<vector<string> > ans;
        for(auto i: map){ // i: key and value ka pair
            ans.push_back(i.second);
        }
        return ans;
    }
};

// main function
int main() {
    Solution s;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string> > ans = s.groupAnagrams(strs);
    for(int i = 0; i < ans.size(); i++){
        cout << i+1 << " -> ";
        for(int j = 0; j < ans[i].size(); j++){
            cout <<  ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}