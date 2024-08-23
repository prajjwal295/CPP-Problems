class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int>st;
        int ans = 0;

        for(auto it:tokens)
        {
            if(st.size() == 0)
            {
                st.push(stoll(it));
            }
            else{
                if(it ==  "*" || it=="+" || it=="-" || it == "/")
                {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();

                    int c;

                    if(it == "*")
                    {
                        c = b*a;
                    }
                    else if(it == "+")
                    {
                        c = b+a;
                    }
                    else if(it == "-")
                    {
                        c = b-a;
                    }else{
                        c = b/a;
                    }

                    st.push(c);
                }
                else{
                    st.push(stoll(it));
                }
            }
        }

        return st.top();
    }
};