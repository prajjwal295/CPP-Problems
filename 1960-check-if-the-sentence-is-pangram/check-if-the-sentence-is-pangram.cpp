class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>check(26);

        for(auto it:sentence)
        {
            check[it-'a']++;
        }

        for(auto it:check)
        {
            if(it == 0)
            return false;
        }

        return true;
    }
};