class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        priority_queue<long,vector<long>,greater<long>>pq;

        for(auto it:nums)
        {
            pq.push(it);
        }

        int cnt = 0;

        while(!pq.empty())
        {
            long x = pq.top();
            pq.pop();
            if(x >=k)
            {
                return cnt;
            }

            long y = pq.top();
            pq.pop();

            pq.push((min(x, y) * 2 + max(x, y)));

            cnt++;
        }

        return cnt;
    }
};