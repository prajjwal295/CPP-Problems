class Solution {
public:
    void solve(vector<int>& candidates,vector<vector<int>>&ans,vector<int>&temp, int target,int i,int sum)
    {

        if(target == sum)
        {
            ans.push_back(temp);
            return ;
        }

        for(int ind = i;ind<candidates.size();ind++)
        {
            if(ind>i && candidates[ind] == candidates[ind-1])
            continue;

            if(sum>target)
            break;

            sum+=candidates[ind];
            temp.push_back(candidates[ind]);
            solve(candidates,ans,temp,target,ind+1,sum);
            sum-=candidates[ind];
            temp.pop_back();
        }

        

        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;

        solve(candidates,ans,temp,target,0,0);

        return ans;
    }
};