class Solution {
public:

    bool leftPallindrome(int left,int right,string s)
    {
        while(left<=right)
        {
            if(s[left++]!=s[right--])
            return false;
        }

        return true;
    }
    void solve(string s,vector<vector<string>>&ans,vector<string>&temp,int i){

        if(i == s.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int idx = i;idx<s.size();idx++)
        {
            if(leftPallindrome(i,idx,s))
            {
                temp.push_back(s.substr(i,idx-i+1));
                solve(s,ans,temp,idx+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;

        solve(s,ans,temp,0);

        return ans;
    }
};