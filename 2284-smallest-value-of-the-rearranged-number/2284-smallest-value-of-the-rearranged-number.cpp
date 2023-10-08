class Solution {
public:
    static bool cmp(char a , char b)
    {
        return a < b;
    }

    long long smallestNumber(long long num) {
        
        long long ans=0;
        vector<char> temp;
        int sign = 1;
        string nums=to_string(num);
        if(nums[0] == '-') sign = -1;
        else sign = 1;

        if(sign == 1)
        temp.push_back(nums[0]);

        for( int i=1;i<nums.size();i++ )
        {
            temp.push_back(nums[i]);
        }

        sort(temp.begin(),temp.end() , cmp);

        if(sign == 1)
        {
            int i=0;
            while(true && i<temp.size()-1)
            {
                if(temp[i] == '0')
                i++;
                else
                break;
            }
            
            swap(temp[i],temp[0]);

            for(int i=0;i<temp.size();i++)
            {
                ans = ans*10 + (temp[i]-'0');
            }
        }
        else{
             for(int i=temp.size()-1;i>=0;i--)
            {
                ans = ans*10 + (temp[i]-'0');
            }

            ans*=-1;
        }

        return ans;
    }
};