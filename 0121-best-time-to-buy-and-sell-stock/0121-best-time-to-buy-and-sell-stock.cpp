class Solution {
public:

    void solve(int i  ,vector<int>& prices , int & minPrice , int &maxProfit)
    {

            if(i == prices.size())
            {
                return ;
            }

            if(prices[i] < minPrice) 
            minPrice = prices[i];

            if(prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;

            solve(i+1, prices,minPrice ,maxProfit);
    }
    int maxProfit(vector<int>& prices) {
        
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;

       
             solve(0 ,prices ,minPrice , maxProfit );

        return maxProfit;
       
    }
};