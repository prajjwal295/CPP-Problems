class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int a = haystack.find(needle);
        if(a!=string::npos)
        return a;
        return -1;
    }
};