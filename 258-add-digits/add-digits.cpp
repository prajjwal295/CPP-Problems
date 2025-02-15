class Solution {
public:
    int addDigits(int num) {
        if(num<10)
        return num;

        int sum = 0;
        while(num)
        {
            sum+= num%10;
            num/=10;

            if(num == 0)
            {
                if(sum <10)
                return sum;

                num = sum;
                sum = 0;
            }
        }

        return -1;
    }
};