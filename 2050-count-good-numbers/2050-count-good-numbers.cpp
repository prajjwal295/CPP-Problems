class Solution {
public:

    int countGoodNumbers(long long n) {
        
        long long even,prime;
       if(n%2 == 0)
       {
         even = n/2;
         prime = n/2; 
       }
       else{
            even = n/2 +1;
           prime = n/2;
       }

       long long ans = 1;

       long long x=5;
       long long y=4;

        long long temp = 1;
       while(even>0)
       {

           if(even%2 == 1)
                temp = (temp*x)%1000000007;

            even = even>>1; 

        x=(x*x)%1000000007;
       }

       ans = (ans * temp);
        ans= ans%1000000007;

        temp =1;

       while(prime>0)
       {

           if(prime%2 == 1)
                temp = (temp*y)%1000000007;

            prime = prime>>1;

       y=(y*y)%1000000007;
       }

        ans*=temp;
        ans= ans%1000000007;

       
       return int(ans);
    }
};