class Solution {
public:
    string convert(string s, int rows) {
        
        cout<<s;
        if(rows == 1) return s;
        vector<string> str(rows);
        string ans="";
        int j=0;
        bool TopToBottom = true;
        int i=0;
            while(j<s.size())
            {
                 cout << "i: " << i << " j: " << j << " TopToBottom: " << TopToBottom << endl; // Debugging statement
                str[i].push_back(s[j]);
                if(i==rows-1)
                {
                    TopToBottom=false;
                }
                 if(i==0)
                {
                    TopToBottom=true;
                }
                
                if(TopToBottom)
                {
                    i++;
                }
               else{
                   i--;
               }
               j++;
            }
            for(int i = 0;i<str.size();i++)
            {
                ans+=str[i];        
            }
  
        return ans;
    }
};