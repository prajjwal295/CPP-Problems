class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int ans = 0;

        int extra = 0;

        while(numBottles!=0)
        {
            ans+=numBottles;
            int temp= numBottles % numExchange;
            numBottles = numBottles / numExchange;
            extra+=temp;
            if(extra >= numExchange)
            {
                numBottles += extra / numExchange;
                extra =  extra % numExchange;
            }
        }

        return ans;
        
    }
};