class Solution {
public:
    int check(vector<int>&nums,int mid)
    {
        int sum = 0;

        for(auto it:nums)
        {
            sum+=(it/mid);

            if(it%mid > 0)
            sum++;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int s = 1;
        int e = -1;

        for(auto it:nums)
        {
            e = max(it,e);
        }

        int ans = -1;

        while(s<=e)
        {
            int mid = (s+e)/2;

            int sum = check(nums,mid);

            if(sum <= threshold)
            {
                ans = mid;
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }

        return ans;
    }
};