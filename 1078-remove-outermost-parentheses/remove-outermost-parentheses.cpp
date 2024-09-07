class Solution {
public:
    string removeOuterParentheses(string s) {

        string  ans = "";

        int k = 0;
        int j = 0;
        
        for(int i = 0;i<s.size();i++)
        {
            if(k == 0)
            {
                if(s[i] == '(')
                {
                    k++;
                }
            }
            else{
                if(s[i] == '(')
                {
                    ans+=s[i];
                    j++;
                }
                else{
                    if(j == 0)
                    {
                        k = 0;
                    }
                    else{
                        j--;
                        ans+=s[i];
                    }
                }
            }
        }

        return ans;
    }
};