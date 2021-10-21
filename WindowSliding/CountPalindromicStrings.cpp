// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int palindromicStrings(int N, int K)
	{
	    // Your code goes here
	    long long mod = 1000000007;
long long dp[K+1][N+1];
for(int i = 0 ;i<=K ; i++)
{
for(int j = 0; j <=N ; j++)
{
    if(i==0 || j==0)
    dp[i][j]=0;
}
for(int i = 1; i <= K ; i++)
dp[i][1] = i, dp[i][2] = i;

for(int i = 1 ;i<=K ; i++)
{
for(int j = 3; j <=N ; j++)
dp[i][j] = ((dp[i-1][j-2])*i)%mod;
}

long long sum = 0;
for(int i = 1 ; i <= N ; i++)
sum = (sum%mod + dp[K][i]%mod)%mod;

return sum;
}
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n, k;
   		cin >> n >> k;

   		Solution ob;

   		cout << ob.palindromicStrings(n, k) << "\n";
   	}

    return 0;
}  // } Driver Code Ends