class Solution {
public:
    int countSubstrings(string s) {
        
        int count = 0;
        for(int k=0;k<s.size();k++)
        {
            int i=k;
            int j=k;
            while(i>=0 && j<=s.size()-1)
            {
                if(s[i] == s[j])
            {
                count++;
                j++;
                i--;
            }
            else{
                break;
            }
            }
            
        }

         for(int k=0;k<s.size();k++)
        {
            int i=k;
            int j=i+1;
            while(i>=0 && j<=s.size()-1)
            {
                if(s[i] == s[j])
            {
                count++;
                j++;
                i--;
            }
            else{
                break;
            }
            }
            
        }

        return count;
    }
};