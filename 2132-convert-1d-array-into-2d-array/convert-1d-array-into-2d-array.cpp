class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans(m,vector<int>(n,0));
         vector<vector<int>>temp;
        int k = original.size();

        if(m*n != k)
        return temp;

        int a = 0;

        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                ans[i][j] = original[a++];
            }
        }

        return ans;
    }
};