class Solution {
public:
    int passThePillow(int n, int time) {
        
        if(time < n)
        return time+1;


        int pass = time / (n-1);

        int rem= time % (n-1);

        int i = 1;

        if(pass %2 == 0)
        {
            while(rem--)
            {
               i++; 
            }
        }
        else{
            i = n;
            while(rem--)
            {
                i--;
            }
        }

        return i;
    }
};