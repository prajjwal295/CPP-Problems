class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,pair<int,int>>mp;

        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(mp.find(ch)!=mp.end())
            {
                auto temp = mp[ch];
                mp.erase(ch);
                mp[ch] = {temp.first , i};
            }
            else{
                mp[ch] = {i,i};
            }
        }

        int cnt = 0;

        for(auto it:mp)
        {
         unordered_set<char>st;
          auto top =  it.second;
          int first = top.first;
          int second = top.second;

          if(second<first+2)
          {
            continue;
          }

          for(int i=first+1;i<second;i++)
          {
            st.insert(s[i]);
          }

          cnt+=st.size();
        }

        return cnt;
    }
};