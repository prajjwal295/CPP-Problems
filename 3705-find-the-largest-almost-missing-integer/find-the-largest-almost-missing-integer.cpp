class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        map<int,int>mp;

        for(auto it:nums)
        {
            mp[it]++;
        }

        if(nums.size() == k)
        {
                int ans = INT_MIN;
        for(auto it:nums)
{
              ans = max(it,ans);
            
        }
        return ans;
        }
        
        
        if(k>1)
        {
           int a = nums[0];
           int b  = nums.back();

           if(mp[a] == 1 && mp[b] == 1)
           {
            return max(a,b);
           }else if(mp[a] == 1)
           {
            return a;
           }else if(mp[b] == 1)
           {
            return b;
           }
           else{
            return -1;
           }
        }

        int ans = INT_MIN;
        for(auto it:nums)
        {
            if(mp[it]==1 || mp[it] == k)
            {
              ans = max(it,ans);
            }
        }

        if(ans == INT_MIN) return -1;

        return ans;
        
    }
};