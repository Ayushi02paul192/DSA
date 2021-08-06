// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int solve(int i,int j,int arr[])
{
    if(i>=j)
    return 0;
    int ans=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int temp=solve(i,k,arr)+solve(k+1,j,arr)+arr[i-1]*arr[j]*arr[k];
        ans=min(ans,temp);
    }
    return ans;
}
    int matrixMultiplication(int N, int arr[])
    {
        // code here 
        int i=1,j=N-1;
         int k=solve(i,j,arr);
         return k;
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