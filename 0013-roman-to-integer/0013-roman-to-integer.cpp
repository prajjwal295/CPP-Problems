class Solution {
public:
    int romanToInt(string s) {
        
        string roman[13] = {"M" ,"CM" ,"D","CD" , "C", "XC" , "L", "XL" , "X","IX" , "V" ,"IV" , "I"};

        int value[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        int ans=0;

        int i=0;

       while(i<s.size())
       {
           for(int j=0;j<13;j++)
           {
                 if (s.compare(i, roman[j].length(), roman[j]) == 0) {
                    ans += value[j];
                    i += roman[j].length();
                    break;  // Exit the inner loop once a match is found
                }
           }
       }

        return ans;
    }
};