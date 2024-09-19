class Solution {
public:
    bool check(vector<int>&arr,int k,int mid)
    {
        int cnt = 1;
        int temp = 0;

        for(int i=0;i<arr.size();i++)
        {
            if(temp+arr[i] <= mid)
            {
                temp+=arr[i];
            }
            else{
                if(cnt < k && temp<=mid)
                {
                     temp = arr[i];
                     cnt++;
                }
                else
                return false; 
            }
        }
        // if(cnt!=k) return false;
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int s = INT_MAX;
        int e = 0;

        for(auto it:nums)
        {
            s = min(it,s);
            e+=it;
        }

        int ans = -1;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(check(nums,k,mid))
            {
                ans = mid;
                e = mid-1;
            }
            else{
                s  = mid+1;
            }
        }

        return ans;
    }
};