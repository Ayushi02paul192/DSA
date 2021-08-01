// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int t[1002][1002];
    int lcsHelp(int x, int y, string &s1, string &s2)
    {
        // your code here
        if(x==0 || y==0)
               return 0;
        if(t[x][y]!=-1)
        return t[x][y];
        
                
                if(s1[x-1]==s2[y-1])
                return t[x][y]= 1+lcsHelp(x-1,y-1,s1,s2);
                else
              return  t[x][y]= max(lcsHelp(x-1,y,s1,s2),lcsHelp(x,y-1,s1,s2));
        
        
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // memset(t,-1,sizeof(t));
        // return lcsHelp(x,y,s1,s2);
        int t[x+1][y+1];
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
            if(i==0 || j==0)
            t[i][j]=0;
        }
         for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                t[i][j]=1+t[i-1][j-1];
                else
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[x][y];
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends