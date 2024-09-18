class Solution {
public:

    bool check(vector<int>&bloomDay ,int m,int k , int mid)
    {
        int cnt = 0;
        int temp = 0;

        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                temp++;
            }
            else{
                temp =  0;
            }

            if(temp == k)
            {
                cnt++;
                temp = 0;
            }

            if(cnt == m)
            return true;
            
        }

        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int s = INT_MAX;
        int e = INT_MIN;

        for(auto it:bloomDay)
        {
            s = min(s,it);
            e = max(e,it);
        }

        int ans = -1;

        while(s<=e)
        {
            int mid = (s+e)/2;
            if(check(bloomDay,m,k,mid))
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