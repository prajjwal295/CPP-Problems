class Solution {
public:
    string longestPalindrome(string str) {
         
    int i = 0;

    string ans = "";

    for(int k = 0;k<str.size();k++)
    {
        int i = k;
        int j = i;

        while(i>=0 && j<str.size())
        {
            if(str[i] == str[j])
            {
                string temp = str.substr(i,j-i+1);
                i--;
                j++;
                if(temp.size()>ans.size())
                ans = temp;
            }
            else{
                break;
            }
        }
    }

    string ans2 = "";

    for(int k = 0;k<str.size();k++)
    {
        int i = k;
        int j = i+1;

        while(i>=0 && j<str.size())
        {
            if(str[i] == str[j])
            {
                string temp = str.substr(i,j-i+1);
                i--;
                j++;
                if(temp.size()>ans2.size())
                ans2 = temp;
            }
            else{
                break;
            }
        }
    }

    if(ans.size()>ans2.size())
    return ans;

    return ans2;
    }
};