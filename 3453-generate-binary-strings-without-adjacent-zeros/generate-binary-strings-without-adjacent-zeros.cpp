class Solution {
public:
    void solve(string temp ,vector<string> &ans , int n)
    {
        if(temp.size() == n)
        {
            cout<<temp<<endl;
            ans.push_back(temp);
            return ;
        }

        temp.push_back('1');
        solve(temp,ans,n);
        temp.pop_back();

        if(temp.empty() || (temp.size()> 0 && temp.back()!='0'))
        {
             temp.push_back('0');
             solve(temp,ans,n);
             temp.pop_back();
        }
       
    }
    vector<string> validStrings(int n) {

        vector<string>ans;

        string temp = "";

        solve(temp,ans,n);

        return ans;

    }
};