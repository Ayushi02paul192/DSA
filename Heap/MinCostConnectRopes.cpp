// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue <long long, vector<long long>, greater<long long>> min_heap;
        for(int i=0;i<n;i++)
        min_heap.push(arr[i]);
        long long cost=0;
        while(min_heap.size()>=2)
        {
            long long first=min_heap.top();
            min_heap.pop();
             long long second=min_heap.top();
            min_heap.pop();
            cost+=first+second;
            min_heap.push(first+second);
        }
        return cost;
    }
};


// { Driver Code Starts.
long long minCost(long long arr[], long long n);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends