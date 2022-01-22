class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int mx = 0;
        int x = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            mx = max(mx + nums[i], nums[i]);
            x = max(mx, x);
        }

        return x;
    }
};