class Solution {
public:
    int myAtoi(string s) {
        
        string str = "";

        bool neg = false;
        bool flag = false;

        for(auto it:s)
        {
           if(flag)
           {
                auto t = it-'0';
                if(str.size() != 0)
                {
                    if(t>=0 && t<=9)
                    {
                        str+=it;
                    }
                    else{
                        break;
                    }
                }
                else{
                    if(t == 0)
                    continue;
                    else if(t>=0 && t<=9)
                    {
                        str+=it;
                    }
                    else{
                        break;
                    }
                }
           }else{
            if(it == '0' || it == ' ' || it == '+' || it == '-')
            {
                if(it == '-')
                {
                    neg = true;
                }

                if(it != ' ')
                flag = true;
            }
            else{
                auto t = it-'0';
                if(t>=0 && t<=9)
                {
                    str+=it;
                }
                else{
                    break;
                }
                flag = true;
            }
           }
        }
        cout<<str;

        if(str == "")
        return 0;

       unsigned long ans = 0;

        int maxi = INT_MAX;

        bool maxCheck = false;

        for (auto it : str) {
            ans = ans * 10 + (it - '0');

            // Step 3: Handle overflow
            if (ans > maxi) {
                return neg ? INT_MIN : INT_MAX;
            }
        }

        // Step 4: Apply the negative sign if needed
        if (neg) {
            ans = -ans;
            if (ans < INT_MIN) {
                return INT_MIN;
            }
        }

        return ans;
    }
};