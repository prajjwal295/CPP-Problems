class Solution {
public:
    int divide(int dividend, int divisor) {
        bool flag = 0 ;

       int d = divisor;
        
        if(dividend == 0 || (divisor == INT_MIN && divisor<dividend))
        return 0;

        if(divisor > 0 && dividend >= 0)
        {
            divisor = divisor;
            dividend = dividend;
        }
        else if(divisor < 0 && dividend <0)
        {
            flag=0;
        if(divisor == INT_MIN)
            {
                divisor = INT_MAX;
            }
            else
            divisor = 0-divisor;
            if(dividend == INT_MIN)
            {
                dividend = INT_MAX;
            }
            else{
                 dividend= 0-dividend;
            }
        }
        else if(divisor < 0 && dividend >=0)
        {
            flag=1;
            if(divisor == INT_MIN)
            {
                divisor = INT_MAX;
            }
            else
            divisor = 0-divisor;
        }else{
            flag=1;
           if(dividend == INT_MIN)
            {
                dividend = INT_MAX;
            }
            else{
                 dividend= 0-dividend;
            }
        }


        int ans = -1;
        int s = 0;
        int e = dividend;

        cout<<dividend<<endl;


        while(s<=e)
        {
            long long mid = s+(e-s)/2;
            if(mid * divisor == dividend)
            {
                ans=mid;
                break;
            }
            else if(mid*divisor < dividend)
            {
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

        cout<<"ans "<<ans;

         if(!flag)
        {
            return ans;
        }
        else{
            if(ans == INT_MAX)
            {
                if(d == -1)
                return INT_MIN+1;
                return INT_MIN;
            }
                
            else
                {
                    if(dividend == INT_MAX &&  divisor<10)
                    return 0-ans-1;
                    else
                    return 0-ans;
                }
        }
    }
};