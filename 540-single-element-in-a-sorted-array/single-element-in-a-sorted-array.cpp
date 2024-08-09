class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int s = 0 ;
        int e = nums.size()-1;

        int ans = -1;

        if(nums.size() == 1)
        return nums[0];

        while(s<=e)
        {
            int mid = (s+e)/2;

            if(mid == 0 && nums[mid+1]!=nums[mid] )
            {
                return nums[mid];
            }
            else if(mid == nums.size()-1 && nums[mid-1]!=nums[mid])
            {
                return nums[mid];
            }
            else if(mid!=0 && mid!=nums.size()-1 && nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid])
            return nums[mid];

            if(mid%2==0)
            {
                if(nums[mid+1] == nums[mid])
                s = mid+1;
                else
                e = mid-1;
            }else{
                if(nums[mid-1] == nums[mid])
                s = mid+1;
                else
                e = mid-1;
            }
        }

        return ans;
    }
};