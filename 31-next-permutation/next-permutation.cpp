class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int left = -1;

       for(int i = nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                left = i;
                break;
            }
        }

        if(left == -1)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        

        for(int i = nums.size()-1;i>left;i--)
        {
            if(nums[i]>nums[left])
            {
                 swap(nums[left],nums[i]);
                break;
            }
        }

        reverse(nums.begin()+left+1,nums.end());

        return ;
    }
};