class Solution {   
public:
    
    bool isPallindrome(string &temp,int s, int e)
    {
        while(s<=e)
        {
            if(temp[s++]!=temp[e--])
            return false;
        }
        return true;
    }

    int countSubstrings(string s) {
        int cnt = 0;

        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(isPallindrome(s,i,j))
                {
                    cnt++;
                }
            }
        }

        

        return cnt;
    }
};