class Solution {
public:

    static bool cmp(int a,int b)
    {
        string p = to_string(a);
        string q = to_string(b);

        string r=p+q;
        string s = q+p;
        
        return r > s;
    }
    string largestNumber(vector<int>& nums) {
        string ans="";

        sort(nums.begin() , nums.end() , cmp);

        for(int i=0;i<nums.size();i++)
        ans+=to_string(nums[i]);

        if(ans[0] == '0') return "0";
        return ans;
    }
};