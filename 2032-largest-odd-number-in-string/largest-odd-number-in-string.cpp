class Solution {
public:
    string largestOddNumber(string num) {

        int j =  num.size();

        string ans = "";
        
        while(j--)
        {
            int n = num[j]-'0';
            if(n%2==1)
            {
                ans = num.substr(0,j+1);
                break;
            }
        }

         return ans;
    }
};