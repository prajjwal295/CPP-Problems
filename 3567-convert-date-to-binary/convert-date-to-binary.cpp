class Solution {
public:
    string convertDateToBinary(string date) {
        
        string ans = "";

        vector<string>temp;

        string t= "";
        for(int i = 0;i<date.size();i++)
        {
            if(date[i] == '-')
            {
                temp.push_back(t);
                t="";
            }
            else{
                t+=date[i];
            }
        }
        temp.push_back(t);

        int j = 0;

        for(auto it:temp)
        {
            int num = stoi(it);
            string nums = "";

            while(num>0)
            {
                int rem = num%2;
                num = num/2;
                string c = "";
                c+= rem+'0';
                c+=nums;
                nums = c;
            }
            ans+=nums;
            if(j<2)
            ans+='-';
             j++;
        }

        return ans;
    }
};