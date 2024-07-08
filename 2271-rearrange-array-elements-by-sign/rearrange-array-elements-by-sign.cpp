class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>ans(nums.size());
        int s = 0;
        int e = 1;

        for(auto it:nums)
        {
            if(it<0)
            {
                ans[e] = it;
                e =e+2;
            }
            else{
                ans[s] = it;
                s = s+2;
            }
        }

        return ans;
    }
};