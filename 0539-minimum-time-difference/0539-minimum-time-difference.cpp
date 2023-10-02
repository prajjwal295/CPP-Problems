class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for(int i=0;i<timePoints.size();i++)
        {
           string temp = timePoints[i];
            int hour = stoi(temp.substr(0,2));
            int min = stoi(temp.substr(3,5));
            int time = hour*60 + min;
            minutes.push_back(time);
        }

        sort(minutes.begin(),minutes.end());
        int mini = INT_MAX;
        for(int i=0;i<minutes.size()-1;i++)
        {
            int sub = minutes[i+1]-minutes[i];
            if(sub<mini)
            mini=sub;
        }

        int extraCase = minutes[0]+1440 -minutes[minutes.size()-1];
        if(extraCase<mini)
        mini=extraCase;

        return mini;
    }
};