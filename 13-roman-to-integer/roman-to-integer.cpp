class Solution {
public:
    int romanToInt(string s) {
        int sum =0;
        unordered_map<char,int> values;
        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;

        for(int i=0;i<s.size();i++){
           int cur = values[s[i]];
           cout<<cur<<endl;
           if(i+1<s.size()+1 && values[s[i]] < values[s[i+1]]){
            sum -= cur;
           }
           else{
            sum += cur;
           }
           
        }
        return sum;
    }
};