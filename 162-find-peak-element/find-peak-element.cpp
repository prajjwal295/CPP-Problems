class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int s = 0;
        int e = nums.size()-1;

        if(nums.size()==1)
        return 0;

        while(s<=e)
        {
            if(s == 0)
            {
                if(nums[s] > nums[s+1])
                return s;
            }
            else
            {
                if(nums[s]>nums[s+1] && nums[s-1]<nums[s])
                {
                    return s;
                }
            }

            if(nums[s+1]>nums[s])
            {
                s++;
            }
            else{
                s+=2;
            }

            if(e == nums.size()-1)
            {
                if(nums[e] > nums[e-1])
                return e;
            }
            else
            {
                if(nums[e]>nums[e+1] && nums[e-1]<nums[e])
                {
                    return e;
                }
            }

            if(nums[e-1]>nums[e])
            {
                e--;
            }
            else{
                e-=2;
            }
        }
         return -1;
    }
};