class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long ans  = 0;

        int j = 0;

        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i]>nums[j])
            {
                long long temp = static_cast<long long>(i - j) * static_cast<long long>(nums[j]);
                ans+=temp;
                j = i;
            }
        }

        if(j!=nums.size()-1)
        {
            long long temp = static_cast<long long>(nums.size()-1 - j) * static_cast<long long>(nums[j]);
            ans+=temp;
        }

        return ans;
    }
};
