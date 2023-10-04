#include<stack>
#include <bits/stdc++.h>
class Solution {
public:
    int compress(vector<char>& chars) {
        
        vector<char> ans;
        int n = chars.size();
        int cnt=1;
        ans.push_back(chars[0]);
        for(int i=1;i<n;i++ )
        {
            if(ans.back() == chars[i] )
            {
                  cnt++;
            }
            else{
                if(cnt==1)
                {
                    cnt=1;
                }
                else{
                    string  s = to_string(cnt);
                    for(char c : s)
                     ans.push_back(c);
                     cnt=1;
                }
                 ans.push_back(chars[i]);
            }
        }

            if(cnt!=1)
            {
                   string  s = to_string(cnt);
                    for(char c : s)
                     ans.push_back(c);
                     cnt=1;
            }

            for(int i=0;i<ans.size();i++)
            {
                chars[i] = ans[i];
            }

        

        return ans.size();
 
    };
};