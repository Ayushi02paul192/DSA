// { Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Function to return the lexicographically sorted power-set of the string.
void solve(string ip,string op,vector<string>& ans)
{
    if(ip.length()==0)
    {
        ans.push_back(op);
        return;
    }
    string op1=op;
   string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1,ans);
    solve(ip,op2,ans);
    
}
vector <string> powerSet(string s)
{
   //Your code here
   string op;
   op="";
//   string t=" "+s;
   vector<string> ans;
   solve(s,op,ans);
   return ans;
   
}


// { Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
}   // } Driver Code Ends