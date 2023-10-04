class Solution {
public:
    string reorganizeString(string s) {
        
        int count[26] = {0};

        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']++;
        }

        int maxi = INT_MIN;
        char maxi_char;
        for(int i=0;i<26;i++)
        {
            if(count[i]>maxi)
            {
                 maxi = count[i];
                 maxi_char = i+'a';
            }
        }


       int index = 0;
       while(index < s.size() && maxi>0)
       {
           s[index] = maxi_char;
           maxi--;
           index+=2 ;
       }

       if(maxi!=0)
       return ""; 

        count[maxi_char-'a'] = 0;
       for(int i= 0; i<26;i++){

           while(count[i]>0)
           {
               index = index>=s.size() ? 1 : index;
               s[index]=i+'a';
               count[i]--;
               index+=2;
           }
       }

    return s;
   
    }
};