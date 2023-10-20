class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        map<int ,int> hash;
        vector<int>ans;

        for(int i=0;i<arr1.size();i++)
        {
            hash[arr1[i]]++;
        }

        for(auto itr:arr2)
        {
            if(hash.find(itr)!=hash.end())
            {
                auto x = hash.find(itr);
                int cnt = x->second;
                vector<int>v(cnt , itr);
                ans.insert(ans.end() , v.begin() ,v.end());
                hash.erase(itr);
            }
        }

                for(auto itr=hash.begin();itr!=hash.end();itr++)
            {
                 vector<int>v(itr->second , itr->first);
                ans.insert(ans.end() , v.begin() ,v.end());
                hash.erase(itr);
            }

            return ans;


    }
};