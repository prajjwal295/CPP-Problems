class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());
        
        for(int i = 0;i<nums.size();i++)
        {
            if(i!=0 && nums[i]==nums[i-1])continue;
            int s = i+1;
            int e = nums.size()-1;

            while(s<e)
            {
                int sum = nums[i]+nums[s]+nums[e];

                if(sum==0)
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[s]);
                    temp.push_back(nums[e]);
                    ans.push_back(temp);
                    s++;
                    e--;

                    while(s<e && nums[s]==nums[s-1])s++;
                    while(s<e && nums[e]==nums[e+1])e--;
                }
                else if(sum>0)
                {
                    e--;
                }
                else{
                    s++;
                }
            }
        }

        return ans;
    }
};