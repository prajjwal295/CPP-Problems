class Solution {
public:
    int getLucky(string s, int k) {
        
        string  curr = "";

        for(auto it:s)
        {
            curr+=to_string(it-'a'+1);
        }

        int val;

        while(k--)
        {
             val = 0;
            for(auto it:curr)
            {
                val+=it-'0';
            }

            curr = to_string(val);
        }

        return val;

    }
};