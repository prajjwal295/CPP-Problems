
class Solution {
public:
    string reverseVowels(string str) {
        
       string vowel = "aeiouAEIOU";

       int s= 0;
       int e=str.size()-1;

       while(s<=e)
       {
           if(vowel.find(str[s]) == string::npos)
           s++;
           else if(vowel.find(str[e]) == string::npos)
           e--;
           else{
               swap(str[s++],str[e--]);
           }
       }
        return str;
    }
};