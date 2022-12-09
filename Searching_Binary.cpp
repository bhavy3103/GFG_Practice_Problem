//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int binarysearch(int arr[], int n, int k)
    {
        // code here
        sort(arr, arr + n);
        int low = 0, high = n - 1;
        int mid;
        while (high - low > 1)
        {
            mid = (high + low) / 2;
            if (arr[mid] < k)
                low = mid + 1;
            else
                high = mid;
        }
        if (low == k)
            return low;
        else if (high == k)
            return high;
        else
            return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends