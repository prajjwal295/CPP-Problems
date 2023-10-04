class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,char> hash;
         char check[256] = {0};


        if(s.size()!=t.size())
        return false;

        for(int i=0;i<s.size();i++)
        {
            if(!hash[s[i]])
            {
                if(!check[t[i]])
                {
                     hash[s[i]] = t[i];
                     check[t[i]] = 1;
                }
                else
                return false;
               
            }
            else{
                if(hash[s[i]] == t[i])
                continue;
                else
                return false;
            }
            
        }
        return true;
    }
};