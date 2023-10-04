class Solution {
public:
 
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>ans;
        unordered_map<string , vector<string>> hash;

        for(auto str :strs)
        {
            string s = str;
            sort(s.begin() , s.end());
            hash[s].push_back(str); 
        }
      
        for(auto it = hash.begin() ; it!=hash.end() ;it++)
        {
            ans.push_back(it->second);
        }
    
        return ans;
    }
};