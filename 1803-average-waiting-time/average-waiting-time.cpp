class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        double  ans = 0;

        int n = customers.size();

        double chef = 0;

        for(auto it:customers)
        {
            int arrival = it[0];
            int dep = it[1];

            if(chef<=arrival)
            {
                chef = arrival;
                chef+=dep;
                ans+=(chef-arrival);
            }
            else{
                chef+=dep;
                ans+=(chef-arrival);
            }
        }

        return ans/n;
    }
};