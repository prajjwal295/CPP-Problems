class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int mini = 0;
        int maxi = 0;

        for(auto it:nums)
        {
            if(it<0)
            mini++;
            else if(it>0)
            maxi++;
        }


        return max(maxi , mini);
    }
};