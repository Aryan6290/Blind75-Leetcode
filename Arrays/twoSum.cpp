#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int sum)
    {
        vector<pair<int, int>> num;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            pair<int, int> p = {nums[i], i};
            num.push_back(p);
        }
        sort(num.begin(), num.end());

        int l = 0, r = num.size() - 1;
        while (l < r)
        {
            if ((num[l].first + num[r].first) == sum)
            {
                vector<int> ans;
                ans.push_back(num[l].second);
                ans.push_back(num[r].second);
                return ans;
            }
            else if (num[l].first + num[r].first < sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        vector<int> nul;
        return nul;
    }
};