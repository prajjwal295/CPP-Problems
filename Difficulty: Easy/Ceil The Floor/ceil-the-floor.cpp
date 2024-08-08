//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        
        int s = 0;
        int e = arr.size()-1;
        
        int f = -1;
        int c = -1;
        
        sort(arr.begin(),arr.end());
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            
            if(arr[mid] == x)
            {
                f = arr[mid];
                break;
            }
            else if(arr[mid]>x)
            {
                e = mid-1;
            }
            else 
            {
                f = arr[mid];
                s = mid+1;
            }
        }
        
         s = 0;
         e = arr.size()-1;
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            
            if(arr[mid] == x)
            {
                c = arr[mid];
                break;
            }
            else if(arr[mid]<x)
            {
                s = mid+1;
            }
            else 
            {
                c = arr[mid];
                e = mid-1;
            }
        }
        
        return {f,c};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends