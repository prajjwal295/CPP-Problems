class Solution {
public:
    int maxDifference(string s) {
        
        map<char,int>mp;

        for(auto it:s)
        {
            mp[it]++;
        }

     //   int maxi = INT_MIN;
        int oddMax = INT_MIN;
      //  int oddMin = INT_MAX;
       // int evenMax = INT_MIN;
        int evenMin = INT_MAX;

        for(auto it:mp)
        {
            if((it.second)%2 == 0)
            {
                //evenMax = max(evenMax,it.second);
                evenMin = min(evenMin,it.second);
            }
            else{
                oddMax = max(oddMax, it.second);
                //oddMin = min(oddMin,it.second);
            }
        }

        return oddMax-evenMin;
    }
};