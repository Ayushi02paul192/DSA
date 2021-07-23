// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
void solve(vector<string>& ans,string op,int n,int ones,int zeroes)
{
    
    if(n==0)
    {
        ans.push_back(op);
        return;
    }
    if(ones>=zeroes)
    {
        string op1=op;
        op1.push_back('1');
        solve(ans,op1,n-1,ones+1,zeroes);
    }
    if(ones>zeroes)
    {
        string op2=op;
        op2.push_back('0');
        solve(ans,op2,n-1,ones,zeroes+1);
    }
    return;
}
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> ans;
	    string op="";
	    int one=0,zero=0;
	    solve(ans,op,N,one,zero);
	    return ans;
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
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends