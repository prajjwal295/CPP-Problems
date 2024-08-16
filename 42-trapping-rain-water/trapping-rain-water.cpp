class Solution {
public:
    int trap(std::vector<int>& height) {

        int n = height.size();
        
        vector<int>prefixMax(n,-1);
        vector<int>suffixMax(n,-1);

        int maxi = -1;

        for(int i = 0;i<n;i++)
        {
            prefixMax[i] = maxi;
            maxi = max(maxi,height[i]);
        }

        maxi = -1;

        for(int i = n-1;i>=0;i--)
        {
            suffixMax[i] = maxi;
            maxi = max(maxi,height[i]);
        }

        int total = 0;

        for(int i=0;i<n;i++)
        {
            if(height[i]<suffixMax[i] && height[i]<prefixMax[i])
            {
                int sum = min(suffixMax[i],prefixMax[i]) - height[i];
                total+=sum;
            }
        }

        return total;

    }
};