class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        
        long long n=s.size();
        cout<<n;
        vector<int> hash(300, 0);
        for( long long i=0;i<n;i++)
        {
            hash[s[i]]++;
        }

        for( long long i=0;i<n;i++){

              if( hash[t[i]]>0)
                 hash[t[i]]--;
                 else return false;
             }

        for( long long i=0;i<300;i++)
        {
            if(hash[i]!=0)
            return false;
        }

        return true;
    }
};