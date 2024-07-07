class Solution {
public:
    string getEncryptedString(string s, int k) {

        k = k%s.size();

        k = s.size() - k;

        reverse(s.begin(),s.end());

        reverse(s.begin(),s.begin()+k);

        reverse(s.begin()+k,s.end());

        return s;
        
    }
};