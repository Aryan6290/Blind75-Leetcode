class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int res = nums[0];
        int maxV = 1, minV = 1;
        for (int num : nums)
        {
            int temp = maxV * num;
            maxV = max(temp, max(minV * num, num));
            minV = min(temp, min(minV * num, num));

            res = max(maxV, res);
        }

        return res;
    }
};