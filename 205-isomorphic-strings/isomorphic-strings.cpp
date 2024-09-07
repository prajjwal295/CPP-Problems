class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        map<char,char>m;

        for(int i = 0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end() && m.find(t[i])!=m.end())
            {
                if(mp[s[i]]!=t[i] || m[t[i]] != s[i])
                {
                    return false;
                }
            }
            else if(mp.find(s[i])!=mp.end())
            {
                if(mp[s[i]]!=t[i])
                {
                    return false;
                }
            }
            else if(m.find(t[i])!=m.end())
            {
                if(m[t[i]] != s[i])
                {
                    return false;
                }
            }
            else{
                mp[s[i]] = t[i];
                m[t[i]] = s[i];
            }
        }

        return true;
    }
};