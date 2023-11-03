class Solution {
public:

    bool check(vector<int>&temp, vector<vector<int>>&ans)
    {
       for(auto it : ans)
       {
           if(it == temp)
           return false;
       }
       return true;
    }

    void solve(int i ,vector<int>&nums  ,vector<int>&temp, set<vector<int>>&ans)
    {
        if(i == nums.size())
        {
            ans.insert(temp);
            return ;
        }

        solve(i+1 , nums, temp, ans);
        temp.push_back(nums[i]);
        solve(i+1, nums, temp, ans);
        temp.pop_back();



    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>> ans;
        vector<vector<int>>t;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        solve(0 , nums, temp, ans);

        for(auto it:ans)
        t.push_back(it);

        return t;
    }
};