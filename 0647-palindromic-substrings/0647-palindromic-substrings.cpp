class Solution {   
public:
    
    bool isPallindrome(string &temp,int s, int e)
    {
        while(s<=e)
        {
            if(temp[s++]!=temp[e--])
            return false;
        }
        return true;
    }

    void solve(int& cnt ,int idx , string s , vector<string> &temp ,  vector<vector<string>> &ans)
    {
        if(idx == s.size())
        {
            // for(int it=0;it<temp.size();it++)
            // {
            //     cout<<temp[it]<<"";
            // }
            // cout<<endl;
            ans.push_back(temp);
            return ;
        }

        for(int i=idx;i<s.size();i++)
        {
            if(isPallindrome(s,idx,i))
            {
                temp.push_back(s.substr(idx,i+1));
                solve(cnt,i+1 , s, temp,ans);
                temp.pop_back();
            }
        }

            
       
    }
    int countSubstrings(string s) {
        int cnt = 0;
        // int idx=0;
        // vector<vector <string> >ans;
        // vector<string>temp;
        // solve(cnt,idx , s, temp , ans);

        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(isPallindrome(s,i,j))
                {
                    cnt++;
                }
            }
        }

        

        return cnt;
    }
};