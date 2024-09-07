class Solution {
public:
    string reverseWords(string input) {
        vector<string>ans;

    string temp = "";

    for(auto it:input)
    {
        if(it == ' ')
        {
            if(temp.size()>0){
            ans.push_back(temp);
        }
            temp = "";
        }
        else{
            temp+=it;
        }
    }
 if(temp.size()>0){
            ans.push_back(temp);
        }
        

    reverse(ans.begin(),ans.end());

    string res = "";

    for(int i=0;i<ans.size();i++)
    {
        if(ans[i] != " " || ans[i] == "")
        {
            res+=ans[i];
            if(i!=ans.size()-1)
            {
                res+=' ';
            }
        }
        
    }

    return res;
    }
};