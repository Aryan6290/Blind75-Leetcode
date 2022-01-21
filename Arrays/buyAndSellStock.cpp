#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 1)
            return 0;
        int n = prices.size();
        int dp[n];
        dp[0] = nums[0];
        int minValue = 0, maxValue = 0;
        for (int i = 1; i < n; i++)
        {
            dp[i] = max(nums[i] - dp[i - 1]);
        }
    }
};