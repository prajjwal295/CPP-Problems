class Solution {
public:
    string customSortString(string order, string s) {
        
        map<char , int> mp;
        string ans;

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }

        for(auto itr: order)
        {
            if(mp.find(itr)!=mp.end())
            {
                auto x = mp.find(itr);
                auto cnt = x->second;
                 string q(cnt , x->first);
            ans+=q;
                mp.erase(itr);
            }
        }

        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
          
                string q(itr->second , itr->first);
            ans+=q;
        }

        return ans;
    }
};