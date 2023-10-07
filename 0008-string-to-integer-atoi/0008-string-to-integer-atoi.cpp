class Solution {
public:
    int myAtoi(string s) {
        
        int sign =1;
        int ans=0;
        int i=0;

        while(s[i] == ' ')
        {
            i++;
        }

        if(i<s.size() && (s[i] == '-' || s[i] == '+'))
        {
            sign = s[i]=='+' ? 1 : -1;
            i++;
        }


        while(i<s.size() && isdigit(s[i]) )
        {
            if(ans>INT_MAX/10 || (ans == INT_MAX/10 && s[i]>'7' ))
            {
                if(sign == 1)
                return INT_MAX;
                return INT_MIN;
            }
            ans = ans*10 +(s[i]-'0');
            i++;
        }
        return ans*sign;
    }
};