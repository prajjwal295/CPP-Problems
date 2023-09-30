class Solution {
public:

    bool check(string str , int s , int e)
    {
        while(s<=e)
        {
            if(str[s]!=str[e])
            return false;

            s++;
            e--;
            
        }
        return true;
    }
    bool validPalindrome(string str) {
        
        int s=0;
        int e= str.size()-1;
        while(s<=e)
        {
            if(str[s]!=str[e])
            {
                   return check(str,s+1,e) || check(str,s,e-1);
            }

            else{
               s++;
               e--;
            }
        }
        return true;
    }
};