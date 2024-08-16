class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>ans(nums2.size());

        int i = nums2.size()-1;

        map<int,int>mp;

        for(int i=0;i<nums2.size();i++)
        {
            mp[nums2[i]] = i;
        }

        while(i>=0)
        {
             while(!st.empty() && st.top()<=nums2[i])
                    {
                        st.pop();
                    }


            if(st.empty())
            {
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
                }

                st.push(nums2[i]);
             i--;
        }

        vector<int>ans2(nums1.size());

        int k = 0;

        for(auto it:nums1)
        {
            int i = mp[it];

            ans2[k] = ans[i];

            k++;
        }

        return ans2;

    }
};