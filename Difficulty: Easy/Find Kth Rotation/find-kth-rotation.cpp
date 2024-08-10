//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        
        int s = 0;
        int e = arr.size()-1;
        
        int idx = INT_MAX;
        int i = -1;
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            
            if(arr[s]<=arr[mid])
            {
                if(arr[s]<idx)
                {
                     idx = min(idx,arr[s]);
                     i = s;
                }
               
                s = mid+1;
            }
            else{
               if(arr[mid]<idx)
                {
                     idx = min(idx,arr[mid]);
                     i = mid;
                }
                e = mid-1;
            }
        }
        
        return i;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends