class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;

        if(strs.size()<2)
        {
            ans.push_back(strs);
            return ans;
        }

        unordered_map<string , vector<string>> mp;

        for(auto str : strs)
        {
            string temp = str;
            sort(temp.begin(),temp.end()) ;
            mp[temp].push_back(str);   
        }

       for(auto itr : mp)
       {
           vector<string> v = itr.second;
           ans.push_back(v);
       }

        
        return ans;

    }
};