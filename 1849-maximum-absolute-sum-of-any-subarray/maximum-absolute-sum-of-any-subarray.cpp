class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int sum = 0;
        int maxi = INT_MIN;

        for(auto it:nums)
        {
            sum+=it;

            if(sum < 0)
            {
                sum = 0;
            }

            maxi = max(maxi , sum);
        }   
        sum = 0;

        for(auto it:nums)
        {
            it = 0-it;

            sum+= it;

            if(sum<0)
            {
                sum = 0;
            }

             maxi = max(maxi , sum);
        }

        return maxi;
    }
};