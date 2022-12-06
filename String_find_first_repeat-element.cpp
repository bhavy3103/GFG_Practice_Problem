//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << firstRepChar(s) << endl;
    }
    return 0;
}
// } Driver Code Ends

string firstRepChar(string s)
{
    string p;
    unordered_set<char> h;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (h.find(c) != h.end())
        {
            p = "c";
            return p;
        }
        else // Else add element to hash set
            h.insert(c);
    }
    p = "-1";
    return p;
    // code here.
    // int ct = 0;
    // string c;
    // map<char, int> m;
    // vector<string> k;
    // vector<int> a;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     char p;
    //     p = s[i];
    //     m[p]++;
    // }
    // for (auto pr : m)
    // {
    //     int i = 0;
    //     k[i] = pr.first;
    //     a[i] = pr.second;
    //     if (a[i] > 1)
    //     {
    //         c = k[i];
    //         ct++;
    //         return c;
    //     }
    //     i++;
    // }
    // if (ct == 0)
    // {
    //     c = "-1";
    //     return c;
    // }
}