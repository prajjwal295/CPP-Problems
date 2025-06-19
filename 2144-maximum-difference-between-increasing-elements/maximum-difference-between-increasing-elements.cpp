class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int ans = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>mini)
            {
                int temp = nums[i]-mini;
                ans = max(temp,ans);
            }
            else{
                mini = nums[i];
            }
        }

        if(ans == 0)
        return -1;

        return ans;
    }
};