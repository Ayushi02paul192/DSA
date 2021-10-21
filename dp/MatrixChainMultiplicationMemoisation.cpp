// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int t[1001][1001];
int solve(int i,int j,int arr[])
{
    if(i>=j)
    return 0;
    if(t[i][j]!=-1)
    return t[i][j];
    int ans=INT_MAX,temp;
    for(int k=i;k<=j-1;k++)
    {
        temp=solve(i,k,arr)+solve(k+1,j,arr)+arr[i-1]*arr[j]*arr[k];
    
        ans=min(ans,temp);
    }
       return t[i][j]=ans;
}
    int matrixMultiplication(int N, int arr[])
    {
        // code here 
        memset(t,-1,sizeof(t));
        int i=1,j=N-1;
        
         return solve(i,j,arr);
         
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends