class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans = "";

        for(auto it:s)
        {
            if(it>='A' && it<='Z')
            ans+=it+32;

            else if(it>='a' && it<='z'  || (it>='0' && it<='9'))
            ans+=it;
        }

        int i = 0;
        int e = ans.size()-1;

        while(i<e)
        {
            if(ans[i++]!=ans[e--])
            return false;
        }

        return true;
    }
};