//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        reverse(arr,arr+n);
        int i = 0, j = n - d - 1;
        while(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        i = n - d;
        j = n - 1;
        while(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends