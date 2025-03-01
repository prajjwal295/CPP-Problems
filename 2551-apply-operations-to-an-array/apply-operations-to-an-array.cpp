class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                nums[i] = 2* nums[i];
                nums[i+1] = 0;
            }
        }

        vector<int>ans(nums.size(),0);
        int i=0;
        for(auto it:nums)
        {
            if(it!=0)
            {
                ans[i++] = it;
            }
        }

        return ans;
        
    }
};