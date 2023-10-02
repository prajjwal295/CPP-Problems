class Solution {
public:
    string reverseOnlyLetters(string str) {
        int s=0;
        int e=str.size()-1;

        while(s<=e)
        {
            if(!isalpha(str[s]))
            s++;
            else if(!isalpha(str[e]))
            e--;
            else{
                swap(str[s],str[e]);
                s++;
                e--;
            }
        }

        return str;
    }
};