class Solution {
public:

    void solve(int i,vector<int>& arr, vector<int>&temp ,vector<vector<int>>& ans,int target)
    {
        if(target == 0)
        {
            ans.push_back(temp);
            return  ;
        }

        for(int ind=i;ind<arr.size();ind++)
        {
            if(ind>i && arr[ind] == arr[ind-1]) continue;
            if(target<arr[ind])break;

             temp.push_back(arr[ind]);
             solve(ind+1,arr , temp, ans, target-arr[ind]);
             temp.pop_back();
        }

        return ;


       

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int>temp;

        vector<bool>hash {0};

        sort(candidates.begin(),candidates.end());

        solve(0,candidates , temp, ans,target);

        return ans;
    }
};