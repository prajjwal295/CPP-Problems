class Solution {
public:
    void solve(int i, vector<int>& arr, vector<int>& temp, vector<vector<int>> &ans, int target)
    {
       if(i>=arr.size())
        {
              return;
        }


        if(target == 0)
        {
            ans.push_back(temp);
            return  ;
        }

        if(target<0)
          {
              return;
        }

        temp.push_back(arr[i]);
        solve(i,arr , temp, ans, target-arr[i]);
        temp.pop_back();
        solve(i+1,arr , temp, ans, target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>temp;
        vector<vector<int>> ans;
        
        solve(0, arr, temp, ans,target); // calling function, and see we start from index zero
        
        return ans; // finally return the answer array
    }
};