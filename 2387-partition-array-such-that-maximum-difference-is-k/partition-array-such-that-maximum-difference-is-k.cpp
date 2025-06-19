
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int count = 1;
        int mini = nums[0];
        for(auto it:nums)
        {
            int diff = it-mini;

            if(diff<=k)
            {

            }
            else{
                count++;
                mini = it;
            }
            mini = min(it,mini);
        }
        cout<<mini;


        return count;
    }
};