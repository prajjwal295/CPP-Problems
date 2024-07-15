class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());

        vector<vector<int>>ans;

        int s = 0;
        int e = 0;
        int maxVal = intervals[s][1];

        for(int i=1;i<intervals.size();i++)
        {
            if(maxVal >= intervals[i][0])
            {
                e=i;
                maxVal = max(maxVal , intervals[i][1]);
            }
            else{
                if(s == e)
                {
                    ans.push_back(intervals[s]);
                }
                else{
                     ans.push_back({intervals[s][0],maxVal});       
                }

                s = i;
                e = i;
                maxVal = intervals[s][1];
            }
        }

        if(s!=e && e == intervals.size()-1 )
        {
              ans.push_back({intervals[s][0],maxVal});
        }else{
            ans.push_back(intervals.back());
        }

        return ans;
    }
};