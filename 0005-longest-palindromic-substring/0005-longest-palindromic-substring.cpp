class Solution {
public:
    string longestPalindrome(string s) {
        int maxi = INT_MIN;
        string temp;

        for(int i=0;i<s.size();i++)
        {
            int j=i;
            int k=i+1;

            while(j>=0 && k<s.size())
            {
                if(s[j] == s[k])
                {
                    if(k-j+1>maxi)
                    {
                        temp = s.substr(j , k-j+1);
                            maxi = k-j+1;
                    }

                    j--;
                    k++;
                }
                else break;
            }
        }

         for(int i=0;i<s.size();i++)
        {
            int j=i;
            int k=i;

            while(j>=0 && k<s.size())
            {
                if(s[j] == s[k])
                {
                    if(k-j+1>maxi)
                    {
                        temp = s.substr(j , k-j+1);
                        maxi = k-j+1;
                        
                    }
  
                    j--;
                    k++;
                }
                else break;
            }
        }


        return temp;
    }
};