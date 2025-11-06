#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solveUsingRecursion(vector<int> &val, vector<int> &wt, int capacity, int index)
    {
        // base case: single item
        if (index == 0)
        {
            if (wt[0] <= capacity)
            {
                return val[0];
            }
            else
                return 0;
        }
        // include/exclude pattern
        int incl = 0;
        if (wt[index] <= capacity)
        {
            incl = val[index] + solveUsingRecursion(val, wt, capacity - wt[index], index - 1);
        }
        int excl = 0 + solveUsingRecursion(val, wt, capacity, index - 1);
        int finalAns = max(incl, excl);
        return finalAns;
    }

    // top-down: 2d dp
    int solveUsingMem(vector<int> &val, vector<int> &wt, int capacity, int index, vector<vector<int>> &dp)
    {
        // base case: single item
        if (index == 0)
        {
            if (wt[0] <= capacity)
            {
                return val[0];
            }
            else
                return 0;
        }
        // step3: check if answer already exist
        if (dp[capacity][index] != -1)
            return dp[capacity][index];
        // include/exclude pattern
        int incl = 0;
        if (wt[index] <= capacity)
        {
            incl = val[index] + solveUsingMem(val, wt, capacity - wt[index], index - 1, dp);
        }
        int excl = 0 + solveUsingMem(val, wt, capacity, index - 1, dp);
        // step2: ans return and store
        dp[capacity][index] = max(incl, excl);
        return dp[capacity][index];
    }

    // bottom-up
    int solveUsingTab(int capacity, vector<int> &wt, vector<int> &val)
    {
        int n = val.size();
        // step1: create dp array
        vector<vector<int>> dp(capacity + 1, vector<int>(n, 0));
        // step2: analyse base case
        for (int w = wt[0]; w <= capacity; w++)
        {
            dp[w][0] = val[0];
        }
        // step3: parameter->range->reverse->run loop
        // rec:
        // capacity: w -> 0
        // index: n-1 -> 0
        for (int weight = 0; weight <= capacity; weight++)
        {
            for (int index = 1; index <= n - 1; index++)
            {
                int incl = 0;
                if (wt[index] <= weight)
                {
                    incl = val[index] + dp[weight - wt[index]][index - 1];
                }
                int excl = 0 + dp[weight][index - 1];
                // step2: ans return and store
                dp[weight][index] = max(incl, excl);
            }
        }
        // ans return
        return dp[capacity][n - 1];
    }
};

int main()
{
    Solution s;

    // Example input
    vector<int> val = {1, 2, 3};
    vector<int> wt = {4, 5, 1};
    int capacity = 4;
    int n = val.size();

    // Recursion
    int ansRec = s.solveUsingRecursion(val, wt, capacity, n - 1);
    cout << "Maximum value (Recursion): " << ansRec << endl;

    // Memoization
    vector<vector<int>> dp(capacity + 1, vector<int>(n, -1));
    int ansMem = s.solveUsingMem(val, wt, capacity, n - 1, dp);
    cout << "Maximum value (Memoization): " << ansMem << endl;

    //Tabulation
    int ansTab = s.solveUsingTab(capacity, wt, val);
    cout << "Maximum value (Tabulation): " << ansTab << endl;

    return 0;
}