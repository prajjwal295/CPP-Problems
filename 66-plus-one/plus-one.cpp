class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        reverse(digits.begin(),digits.end());

        bool carry = true;

        for(int i = 0;i<digits.size();i++)
        {
            if(carry)
            {
                if(digits[i] == 9)
                {
                    digits[i] = 0;
                    carry = true;
                }
                else{
                    digits[i]++;
                    carry = false;
                    break;
                }
            }
            else{
                carry = false;
                break;
            }
        }

        if(carry)
        digits.push_back(1);

        reverse(digits.begin(),digits.end());

        return digits;
    }
};