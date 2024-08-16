class Solution {
public:
    int compress(vector<char>& input) {

    string ans = "";

    ans+=input[0];
    int k = 1;

    for(int i = 1;i<input.size();i++)
    {
        if(input[i] == input[i-1])
        {
            k++;
        }
        else{
            if(k != 1)
            {
                string c = to_string(k);
                ans+=c;
            }

            ans+=input[i];
            
            k = 1;
        }
    }

    if(k!=1)
    {
         string c = to_string(k);
        ans+=c;
    }

    input.clear();

    for(auto  it:ans)
    {
        input.push_back(it);
    }

    return input.size();
    }
};