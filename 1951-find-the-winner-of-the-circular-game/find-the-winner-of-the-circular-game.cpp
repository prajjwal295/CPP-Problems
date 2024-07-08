class Solution {
public:
    int findTheWinner(int n, int k) {

        vector<int>visited(n,0);
        int ans =-1;

        int j =1;
        int cnt = 0;
        int i =0;
        while(true)
        {
            if(cnt == n-1)
            break;
            
            if(!visited[i%n])
            {
                if(j == k)
                {
                    visited[i%n] =1;
                    cnt++;
                    j =0;
                }
                j++;
            }

            i++;
           
        }

        for(int i = 0;i<n;i++)
        {
            if(visited[i]  == 0)
            {
                 ans = i+1;
                 break;
            }
           
        }


        return ans;
        
        
    }
};