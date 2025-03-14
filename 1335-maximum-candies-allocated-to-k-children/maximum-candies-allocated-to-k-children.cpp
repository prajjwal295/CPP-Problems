class Solution {
public:
    bool check(int n , long long k , vector<int> candies)
    {
        int j = 0;
        for(long i=0;i<k;i++)
        {
            if(j == candies.size())
            return false;

            if(candies[j] >= n)
            {
                int t = candies[j]/n;
                i+=(t-1);
                j++;
            }
            else{
               i--; 
               j++;
            }

            if(i>k)
            return true;
        }
        return true;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        sort(candies.begin() , candies.end());
        int s = 1;
        int e = INT_MIN;
        int ans = 0;
      //  long sum = 0;

        for(auto it:candies)
        {
            if(it>e)
            {
                e = it;
            }
           /// sum+=it;
        }
        // if(k>sum)
        // return 0;

        while(s<=e){
         
            int mid = s - (s-e)/2;
            if(check(mid , k , candies))
            {
                ans = mid;
                s =mid+1;
            }
            else{
                e = mid-1;
            }
        }

        return ans;
        
    }
};