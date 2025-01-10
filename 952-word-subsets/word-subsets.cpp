class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;

        unordered_map<char,int>mp;

        for(auto  it:words2)
        {
            unordered_map<char,int>mp1;
            for(int i=0;i<it.size();i++)
            {
                mp1[it[i]]++;
            }

            for(auto its:mp1)
            {
                mp[its.first] = max(mp[its.first],its.second);
            }
        }
       
        for(auto its:words1)
        {
           unordered_map<char,int>mp2;

           for(int i=0;i<its.size();i++)
           {
             mp2[its[i]]++;
           }

            bool flag = true;

            for(auto it:mp)
            {
                if(mp2[it.first] < it.second)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            ans.push_back(its);
        }

        return ans;
    }
};