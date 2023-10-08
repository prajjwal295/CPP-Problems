class Solution {
public:
    string removeDuplicates(string s, int k) {


        vector<pair<char,int>> ans;

        for(int i=0;i<s.size();i++)
        {
            if(ans.size() == 0 || ans.back().first!=s[i])
            {
                ans.push_back({s[i],1});
            }
            else{
               
                ans.back().second++;
               
             }
             if(ans.back().second == k)
                ans.pop_back();
        }

        string temp="";
        for(auto st : ans)
        {
            cout<<st.first<<endl;
            temp.append(st.second,st.first);
        }
        
        return temp;
    }
};