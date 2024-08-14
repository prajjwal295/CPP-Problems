class Solution {
public:
    int jump(vector<int>& nums) {
    int l = 0;
    int r=0;
    int n = nums.size();

    int jump = 0;

    while(r<n-1)
    {   
        int farthest = 0;
        for(int i=l;i<=r;i++)
        {
            farthest = max(farthest,nums[i]+i);
        }

        if(farthest==r) return -1;
        jump++;
        l=r+1;
        r=farthest;
    }

    return jump;
    }
};