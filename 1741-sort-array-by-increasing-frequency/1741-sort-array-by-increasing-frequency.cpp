class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        map <int , int> mp2;

        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;

       sort(nums.begin() , nums.end() , [&](int a ,int b){
           return (mp[a] != mp[b]) ? mp[a]<mp[b] : a>b;
       });

       return nums;




    }
};