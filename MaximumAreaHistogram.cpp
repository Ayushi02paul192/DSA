// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
   int MAH(vector<int>& v)
    {
        stack<pair<int,int>> s;
        vector<int> left;
        vector<int> right;
        vector<int> width;
        int maxi=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            while(s.size()>0 && s.top().first>=v[i])
              s.pop();
            if(s.size()==0)
                left.push_back(-1);
            else 
                left.push_back(s.top().second);
            s.push({v[i],i});
        }
        for(int i=n-1;i>=0;i--)
        {
            while(s.size()>0 && s.top().first>=v[i])
              s.pop();
            if(s.size()==0)
                right.push_back(-1);
            else 
                right.push_back(s.top().second);
            s.push({v[i],i});
        } 
           for(int i=0;i<n;i++)
        {
               width[i]=(right[i]-left[i]-1)*v[i];
               maxi=max(maxi,width[i]);
           }
        return maxi;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
         vector<int> v;
        for(int j=0;j<m;j++)
            v.push_back(M[0][j]);
        int mx=MAH(v);
        for(int i=1;i<m;i++)
        {
        for(int j=0;j<n;j++)
        {
            if(M[i][j]=='0')
                v[j]=0;
            else
                v[j]=v[j]+(M[i][j]);
        }
            mx=max(mx,MAH(v));
        }
        return mx;
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends