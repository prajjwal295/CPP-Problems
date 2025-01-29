class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum =0;

        for(auto it:nums)
        {
            sum+=it;
        }

        int cnt =0;
        int left = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            left+=nums[i];

            int right = sum - left;

            if(abs(left-right)%2 ==0)
            cnt++;
        }

        return cnt;
    }
};