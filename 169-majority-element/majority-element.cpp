class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ele = 0;
        int cnt = 0;

        for(auto it:nums)
        {
            if(cnt == 0)
            {
                ele = it;
                cnt++;
            }
            else if(it == ele)
            {
                cnt++;
            }
            else if(it != ele)
            {
                cnt--;
            }
        }

        int c= 0;
        for(auto it:nums)
        {
            if(it == ele)
            {
                c++;
            }
        }
        int n = nums.size();

        if(c>=n/2)
        return ele;


        return -1;
    }
};