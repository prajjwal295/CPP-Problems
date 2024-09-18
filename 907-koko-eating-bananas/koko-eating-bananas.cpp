class Solution {
public:
    bool check(vector<int>&piles,int k,int h)
    {
       int cnt = 0;

       for(int i = 0;i<piles.size();i++)
       {
         cnt+=piles[i]/k;
         int t = piles[i]%k;

         if(t!=0)
         cnt++;

         if(cnt > h)
         return false;
         
       }

        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int s = 1;
        int e = INT_MIN;

        for(auto it:piles)
        {
            e = max(e,it);
        }

        int ans = -1;

        while(s<=e)
        {
            int mid = (s+e)/2;

            if(check(piles,mid,h))
            {
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }

        return ans;
    }
};