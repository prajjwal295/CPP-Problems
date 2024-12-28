class Solution {
public:
    int countDigits(int num) {
        string str = to_string(num);
        int cnt = 0;
        for(int i=0;i<str.size();i++)
        {
            int n = str[i]-'0';
            if(num%n == 0)
            cnt++;
        }

        return cnt;
    }
};