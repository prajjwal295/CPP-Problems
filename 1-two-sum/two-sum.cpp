class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>st;
        int i =0;
        for(auto it:nums)
        {
            int rem = target - it;

            if(st.find(rem)!=st.end())
            return {st[rem] , i};

            st[it] = i;
            i++;   
        }

        return {-1};
    }
};