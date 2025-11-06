#include <bits/stdc++.h>
using namespace std;

//Top Down Approach
// Time Complexity: O(N)
// class S1
// {
// public:

//      // approach 1: only recursion ka use krke solve krdia
//     int solveUsingRecursion(int n){
//         // base case
//         if(n==0) return 0;
//         if(n==1) return 1;
//         int ans = solveUsingRecursion(n-1) + solveUsingRecursion(n-2);
//         return ans;
//     }
//     int fib(int n){
//         int ans = solveUsingRecursion(n);
//         return ans;
//     }

//     // approach 2: using memoization
//      // 1-d dp array: n+1 block created from n to 0
//     int solveUsingMemoization(int n, vector<int> &dp)
//     {
//         // base case
//         if (n == 0)
//             return 0;
//         if (n == 1)
//             return 1;

//         // step 3: base case ke baad, check if ans already exists or not
//         if (dp[n] != -1)
//             return dp[n]; // change hua hai, answer store hua hai

//         // step 2: dp array me ans store karo and return kro
//         dp[n] = solveUsingMemoization(n - 1, dp) + solveUsingMemoization(n - 2, dp);
//         return dp[n];
//     }

//     int fib(int n)
//     {
//         // step 1: create dp array and pass in function
//         vector<int> dp(n + 1, -1);
//         return solveUsingMemoization(n, dp);
//     }
// };

class S2{
    public:
    int solveUsingTabulation(int n){
        //step 1: crete dp[] array
        vector<int>dp(n+1, -1);
        //step 2: analyse base case and updte the array
        dp[0]=0;
        if(n==0) return 0;
        dp[1]=1;

        // step3: check patameter and reverse it and run a loop
        //recursion -> n to 0;
        //reverse -> 0 to n

        for(int i=2; i<=n; i++){
            //copy paste
            dp[i] = dp[i-1] + dp[i-2];
        }
        //ans return 
        return dp[n];
    }

    int fib(int n){
        return solveUsingTabulation(n);
    }
};


int main()
{
    S2 s;
    int n;
    cout << "Enter the value of n:" ;
    cin >> n;
    // cout <<" Ans: "<<s.fib(n) << endl;
    cout <<" Ans: "<<s.fib(n) << endl;
    

    return 0;
}