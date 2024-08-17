class Solution {
public:
    void solve(vector<int>& candidates,vector<vector<int>>&ans,vector<int>&temp,int target,int i,int sum )
    {

        if(i==candidates.size() || sum>target)
        return;

        if(sum == target)
        {
            ans.push_back(temp);
            return ;
        }

        sum+=candidates[i];
        temp.push_back(candidates[i]);
        solve(candidates,ans,temp,target,i,sum);
        sum-=candidates[i];
        temp.pop_back();
        solve(candidates,ans,temp,target,i+1,sum);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;

        solve(candidates,ans,temp,target,0,0);


        return ans;
    }
};