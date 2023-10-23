class Solution {
public:
    int minAddToMakeValid(string str) {
        
        int s = 0;
        int e = str.size();
        int cnt = 0;
        int lcnt = 0;
        int rcnt =0;

        stack<char> st;

        while(s!=e)
        {
            if(st.empty())
            {
                 st.push(str[s]);
                if(str[s] == ')')
                {
                    rcnt++;
                }
                else{
                    lcnt++;
                }  
            }
           else if(st.top()  == '(')
            {
                if(str[s] == ')')
                {
                    st.pop();
                    lcnt--;
                }
                else{
                 st.push(str[s]);
                 lcnt++;
                }
            }
            else if(st.top() == ')')
            {
                 st.push(str[s]);
                if(str[s] == ')')
                {
                    rcnt++;
                }
                else{
                    lcnt++;
                }  
            }

            cout<<lcnt<<" "<<rcnt<<endl;
            s++;
          
        }

        return abs(rcnt+lcnt);
    }
};