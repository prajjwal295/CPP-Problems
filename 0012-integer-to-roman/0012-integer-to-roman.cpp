class Solution {
public:
    string intToRoman(int num) {

        map<int, char> roman = {
        {1, 'I'},
        {5, 'V'},
        {10, 'X'},
        {50, 'L'},
        {100, 'C'},
        {500, 'D'},
        {1000, 'M'}
    };
        
        vector<int> n;
        vector<int > arr;
        int mul = 1;
        while(num>0)
        {
            int i = num%10;
            num/=10;
            i*=mul;
            n.push_back(i);

            mul*=10;
        }
        
        int i=0;
        int j = n.size()-1;

        while(i<=j)
        {
             swap(n[i],n[j]);
             i++;
             j--;
        }
       

        for(int i=0;i<n.size();i++)
        {
            int cnt=0;
            if(n[i]>=1000)
            {
                cnt = n[i]/1000;
                while(cnt--)
                {
                    arr.push_back(1000);
                }
            }
           else if(n[i]>=500)
            {
                 if(n[i] == 900)
                {
                    arr.push_back(100);
                    arr.push_back(1000);
                }
                else{
                     arr.push_back(500);
                cnt = n[i]-500;
                 while(cnt>0)
                {
                    arr.push_back(100);
                    cnt-=100;
                }
                }
                
            }
            else if(n[i]>=100)
            {
                 if(n[i] == 400)
                {
                    arr.push_back(100);
                    arr.push_back(500);
                }
                else{
                     cnt = n[i]/100;
                while(cnt--)
                {
                    arr.push_back(100);
                }
                }
               
            }
            else if(n[i]>=50)
            {
                 if(n[i] == 90)
                {
                    arr.push_back(10);
                    arr.push_back(100);
                }
                else{
                     arr.push_back(50);
                cnt = n[i]-50;
                while(cnt>0)
                {
                    arr.push_back(10);
                    cnt-=10;
                }
                }
                
            }
             else if(n[i]>=10)
            {
                if(n[i] == 40)
                {
                    arr.push_back(10);
                    arr.push_back(50);
                }
                else{
                    cnt = n[i]/10;
                    while(cnt--)
                    {
                        arr.push_back(10);
                    }
                }
                
            }
            else if(n[i]>=5)
            {
                if(n[i] == 9)
                {
                    arr.push_back(1);
                    arr.push_back(10);
                }
                else{

                arr.push_back(5);
                cnt = n[i]-5;
                while(cnt>0)
                {
                    arr.push_back(1);
                    cnt-=1;
                }
                }
               
            }
            else{
                if(n[i] == 4)
                {
                    arr.push_back(1);
                    arr.push_back(5);
                }
                else{
                    cnt = n[i]/1;
                while(cnt--)
                {
                    arr.push_back(1);
                }
                }
                 
            }
        }

        string ans;

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=0)
            {
                ans+=roman[arr[i]];
            }
        }




        for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";

        return ans;
    }
};