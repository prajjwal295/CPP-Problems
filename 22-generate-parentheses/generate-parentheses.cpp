class Solution {
public:
    void solve(int l,int r,string&temp,vector<string>&ans , int n)
    {
       if (l + r == 2 * n) {
            ans.push_back(temp);
            return;
        }

        if (l < n) {
            temp += '(';
            solve(l + 1, r, temp, ans, n);
            temp.pop_back();  // backtrack
        }
        
        if (r < l) {
            temp += ')';
            solve(l, r + 1, temp, ans, n);
            temp.pop_back();  // backtrack
        }
    }
    vector<string> generateParenthesis(int n) {
        
       vector<string>ans;
        string temp = "";

        int l =0,r =0;

        solve(l,r,temp,ans,n);

        return ans;
    }
};