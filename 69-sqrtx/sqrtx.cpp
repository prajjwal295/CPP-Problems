class Solution {
public:
    int mySqrt(int x) {
        
        int s = 0;
        int e = x;

        int ans = 0;

        while(s<=e)
        {
            unsigned long  mid = s - (s-e)/2;

            if(mid*mid > x)
            {
                e = mid-1;
            }
            else if(mid*mid < x)
            {
                ans = mid;
                s = mid+1;
            }
            else{
                ans = mid;
                break;
            }
        }

        return ans;
    }
};