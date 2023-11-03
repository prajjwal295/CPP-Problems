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

    void solve(int i ,vector<int>&nums  ,vector<int>&temp, vector<vector<int>>&ans)
    {
        if(i == nums.size())
        {
            vector<int>q;
            for(int i=0;i<temp.size();i++)
            q.push_back(temp[i]);
            sort(q.begin(),q.end());
            if(check(q , ans))
            ans.push_back(q);
            return ;
        }

        solve(i+1 , nums, temp, ans);
        temp.push_back(nums[i]);
        solve(i+1, nums, temp, ans);
        temp.pop_back();



    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int>temp;

        solve(0 , nums, temp, ans);

        return ans;
    }
};