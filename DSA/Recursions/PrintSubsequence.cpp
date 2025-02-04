#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubsequences(string str, size_t index, string output, vector<string> &ans){
    //base case
    if(index == str.length()){
        ans.push_back(output);
        return;
    }

    //1 case me khud solve karunga
    char ch = str[index];

    //include the character
    printSubsequences(str, index+1, output+ch, ans);

    //exclude the character
    printSubsequences(str, index+1, output, ans);
}

int main(){
    string str = "abc";
    size_t index= 0;
    string output = " ";
    vector < string > ans;

    printSubsequences(str, index, output, ans);

    cout << ans.size() << endl;

    for(auto i: ans){
        cout << i << endl;
    }
    return 0;
}