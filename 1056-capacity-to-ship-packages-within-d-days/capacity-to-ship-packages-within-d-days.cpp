class Solution {
public:
    bool check(vector<int>arr,int total,int days)
    {
        int cnt = 0;
        int temp = 0;

        for(auto it:arr)
        {
            if(temp+it <= total)
            {
                temp+=it;
            }
            else{
                cnt++;
                if(it<=total)
                temp = it;
                else
                return false;
            }

            if(cnt == days && temp > 0)
            return false;
        }

        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int s = INT_MAX;
        int e = 0;

        for(auto it:weights)
        {
            e+=it;
            s = min(s,it);
        }

        int ans = -1;

        while(s<=e)
        {
            int mid = (s+e)/2;

            if(check(weights,mid,days))
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