// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool subsetSum(int arr[],int sum,int N)
{
    
    bool dp[N+1][sum+1];
    for(int i=0;i<=sum;i++)
    dp[0][i]=false;
    for(int i=0;i<=N;i++)
    dp[i][0]=true;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=sum)
            dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[N][sum];
}
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        if(sum%2!=0)
        return 0;
        else
        return subsetSum(arr,sum/2,N);
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
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends