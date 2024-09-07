class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";

        for(int i = 0;i<strs[0].size();i++)
        {
            bool check = true;
            for(int j = 1;j<strs.size();j++)
            {
                if(strs[j][i] != strs[0][i])
                {
                    check = false;
                }
            }

            if(check)
            {
                ans+=strs[0][i];
            }
            else{
                break;
            }
        }

        return ans;

    }
};