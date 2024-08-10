class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int s = 0 ;
        int e = nums.size()-1;

        if(nums.size() == 1)
        return 0;

        if(nums[s]>nums[s+1])
        return s;

        if(nums[e]>nums[e-1])
        return e;

        s++;
        e--;

        while(s<=e)
        {
            int mid = (s+e)/2;

            if(nums[mid]>nums[mid+1] && nums[mid-1]<nums[mid])
            return mid;

            if(nums[mid]>nums[mid-1])
            {
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }

        return -1;
    }
};