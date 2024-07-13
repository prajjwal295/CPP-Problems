class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;

        for(int i = 0;i<n;i++)
        {
            if(i!=0 && nums[i] == nums[i-1]) continue;

            for(int l = n-1;l>=0;l--)
            {
                if(l!=n-1 && nums[l] == nums[l+1]) continue;

                int j = i+1;
                int k = l-1;

                while(j<k)
                {
                    long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];

                    if(sum<target)
                    {
                        j++;
                    }
                    else if(sum > target)
                    {
                        k--;
                    }
                    else{
                        vector<int>temp = {nums[i],nums[j],nums[k] ,nums[l]};
                        ans.push_back(temp);
                        j++;
                        k--;

                        while(j<k && nums[j] == nums[j-1]) j++;
                        while(j<k && nums[k] == nums[k+1]) k--;
                    }
                }
            }
        }

        return ans;
    }
};