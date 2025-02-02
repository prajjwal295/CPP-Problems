class Solution {
public:
    bool check(vector<int>& nums) {

        bool flag = true;
        int idx = -1;
        
        for(int i =0 ;i<nums.size()-1;i++)
        {
            if(flag)
            {
                if(nums[i] > nums[i+1])
                {
                    flag = false;
                    idx = i;
                }
            }
            else{
                if(nums[i] > nums[i+1])
                return false;
            }
        }

        if(idx == -1) 
        return true;

        if(nums[0] >= nums.back())
        return true;

        return false;
    }

};