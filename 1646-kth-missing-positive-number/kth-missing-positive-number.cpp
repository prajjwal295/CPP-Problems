class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n = arr.size();
        int t = arr.back();

        if(t - n < k)
        {
            if(t <= n)
            return t+k;
            else
            return k+n;
        }

        int s = 0;
        int e = n-1;

        int val = 0;
        int d = 0;

        while(s<=e)
        {
            int mid = (s+e)/2;

            int diff = arr[mid] - mid - 1;

            if(diff < k)
            {
                val = arr[mid];
                d = k-diff;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }

        if(val == 0) return  k;
        return val+d;
    }
};