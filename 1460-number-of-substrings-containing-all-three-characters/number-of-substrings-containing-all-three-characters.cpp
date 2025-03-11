class Solution {
public:
    int numberOfSubstrings(string s) {
       int cnt = 0;
       int n  = s.size();

        int a = -1;
        int b = -1;
        int c = -1;

        int j = 0;
        for(int i=0;i<s.size();i++)
        {
                int ch = s[i]-'a';
                if(ch == 0)
                a = i;
                else if(ch == 1)
                b =  i;
                else
                c = i;
                if(a != -1 && b != -1 && c!=-1)
                {
                    cnt+=(n-i);
                    if(a == j)
                    {
                        a = -1;
                    }
                    if(b == j)
                    {
                        b = -1;
                    }
                    if(c == j)
                    {
                        c = -1;
                    }
                    j++;
                    i--;
                }
        }
        return cnt;
    }
};