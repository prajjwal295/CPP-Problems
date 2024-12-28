class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int cnt = 0;

        for(auto  it:sentences)
        {
            int temp = 0;
            for(int i=0;i<it.size();i++)
            {
                if(it[i] == ' ')
                temp++;
            }
            cnt = max(cnt,temp);
        }

        return cnt+1;
    }
};