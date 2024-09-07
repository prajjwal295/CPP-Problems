class Solution {
public:
    int maxDepth(string s) {
        
        int d = 0;
        int maxD = 0;

        for(auto it:s)
        {
            if(it == '(')
            {
                d++;
            }
            else if(it == ')')
            {
                d--;
            }

            maxD = max(d,maxD);
        }

        return maxD;


    }
};