// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int t[502][502];
bool ispalindrome(string &str,int i,int j)
{
    while(i<j)
    if(str[i++]!=str[j--])
    return false;
    return true;
}
int solve(string &st,int i,int j)
{
     if(i>=j)
     return 0;
     if(ispalindrome(st,i,j)==true)
     return 0;
     if(t[i][j]!=-1)
     return t[i][j];
     int temp;
     int ans=INT_MAX;
     for(int k=i;k<j;k++)
     { int left,right;
        if(t[i][k]!=-1)
                    left = t[i][k];
                else
                {
                    left = solve(st,i,k);
                    t[i][k] = left;
                }
                if(t[k+1][j]!=-1)
                    right = t[k+1][j];
                else
                {
                    right = solve(st,k+1,j);
                    t[k+1][j] = right;
                }
                temp=1+left+right;
        ans=min(ans,temp);
     }
     return t[i][j]=ans;
}
    int palindromicPartition(string str)
    {
        // code here
        memset(t,-1,sizeof(t));
        int i=0,j=str.length()-1;
        
         return solve(str,i,j);
         
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends