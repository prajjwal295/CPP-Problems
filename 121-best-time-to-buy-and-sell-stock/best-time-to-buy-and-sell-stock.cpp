class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        
        vector<int>profit(n,0);

        int maxi = prices[n-1];

        for(int i =n-1;i>=0;i--)
        {
            maxi = max(prices[i],maxi);
            profit[i] = maxi;
        }

        int diff = INT_MIN;
        int pro = INT_MIN;

        for(int i =0;i<n-1;i++)
        {
            diff = profit[i] - prices[i];
            pro = max(diff,pro);
        }

        if(pro == INT_MIN) return 0;

        return pro;
    }
};