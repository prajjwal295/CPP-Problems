class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        
        vector<int>mp(blocks.size());

        for(int i=0;i<blocks.size();i++)
        {
            int n = 0;
            char ch = blocks[i];
            if(ch == 'B')
            n = 1;
            
            if(i==0)
            {
                mp[i] = n;
            }
            else{
                mp[i] = mp[i-1] + n;
            }
        }
        int ans = INT_MAX;
        int temp = 0;
        for(int i=0;i<mp.size()-k+1;i++)
        {
            int s;
            if(i == 0)
            s=0;
            else
            s = mp[i-1];
            int e = mp[i+k-1];

            int sub = e-s;
            temp = k-sub;
            ans = min(temp,ans);
        }

        return ans;
    }
};