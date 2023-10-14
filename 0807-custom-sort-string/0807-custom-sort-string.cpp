class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
       map<char , int> hash;
        for(int i=0;i<s.size();i++)
        {
           hash[s[i]]++;
        }


        for(auto itr : order)
        {
            if(hash.find(itr)!=hash.end())
            {
                auto temp = hash.find(itr);
                int cnt = temp->second;
                string q(cnt , temp->first);
                ans+=q;
                hash.erase(itr);
            }
        }

         for(auto itr : hash)
         {
             string q(itr.second , itr.first);
              ans+=q;
         }


        return ans;

    }
};