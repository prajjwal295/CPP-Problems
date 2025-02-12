class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        map<int,int>mp;
        int ans = -1;
        int sum = -1;

        for(auto it:nums)
        {
            string temp = to_string(it);

            int sumi = 0;

            for(auto i:temp)
            {
                int x = i-'0';
                sumi+=x;
            }

            if(mp.find(sumi) == mp.end())
            {
                mp[sumi] = it;
            }
            else{
                sum = it+mp[sumi];
                mp[sumi] = max(it,mp[sumi]);
            }

        ans = max(ans,sum);
        }

        return ans;
    }
};