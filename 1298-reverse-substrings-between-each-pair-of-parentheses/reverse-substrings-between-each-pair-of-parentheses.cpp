class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<string>st;
        
        string temp = "";

        for(auto it:s)
        {
            if(it == '(')
            {
                st.push(temp);
                temp = "";
            }
            else if (it == ')')
            {
                reverse(temp.begin(),temp.end());
                string t = st.top();
                st.pop();
                t+=temp; 
                temp=t;
                cout<<t<<endl;
            }
            else{
                temp.push_back(it);
            }
        }

        return temp;
    }
};