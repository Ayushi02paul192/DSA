// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find all possible unique subsets.
    void solve(vector<int> arr,vector<int>& op,set<vector<int>>& s)
    {
        if(arr.size()==0)
        {
            s.insert(op);
            return;
        }
        vector<int> op2=op;
        op.push_back(arr[0]);
        arr.erase(arr.begin()+0);
        solve(arr,op,s);
        solve(arr,op2,s);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        set<vector<int>>s;
        vector<int> op;
        sort(arr.begin(),arr.end());
        solve(arr,op,s);
        vector<vector<int>> res;
        for(auto x:s)
        res.push_back(x);
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends