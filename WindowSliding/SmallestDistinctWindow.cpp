// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    string findSubString(string str)
    {
        // Your code goes here   
        set<char>s;
        unordered_map<char,int> mp;
        for(auto it:str)s.insert(it);
        int n=s.size();
        int i=0,j=1;
        mp[str[i]]++;
        int c=1;
        int mini=INT_MAX;
        while(j<str.length()&& i<=j)
        {
            if(c<n)
            {
                if(mp[str[j]]==0)c++;
                mp[str[j]]++;j++;          
            }
                
                else if(c==n)
                {
                    mini=min(mini,j-i);
                    if(mp[str[i]]==1)c--;
                    mp[str[i]]--;
                    i++;
                }
                
        }
        while(c==n)
        {
            mini=min(mini,j-i);
            if(mp[str[i]]==1)c--;
            mp[str[i]]--;
            i++;
        }
        return str.substr(i-1,mini);
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str).size() << endl;
    }
    return 0;
}  // } Driver Code Ends