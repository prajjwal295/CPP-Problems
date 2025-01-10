class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;

        int n = pref.size();

        for(auto it:words)
        {
            string temp = it.substr(0,n);

            if(temp == pref)
            cnt++;
        }

        return cnt;
    }
};