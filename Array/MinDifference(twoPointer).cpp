#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
  ll m,n;
  cin>>m>>n;
  ll A[m],B[n];
  for(int i=0;i<m;i++)
    cin>>A[i];
  for(int i=0;i<n;i++)
    cin>>B[i];
    // Sort both arrays using
    // sort function
    sort(A, A + m);
    sort(B, B + n);
 
    int a = 0, b = 0;
 
    // Initialize result as max value
    int result = INT_MAX;
 
    // Scan Both Arrays upto
    // sizeof of the Arrays
    while (a < m && b < n)
    {
        if (abs(A[a] - B[b]) < result)
            result = abs(A[a] - B[b]);
 
        // Move Smaller Value
        if (A[a] < B[b])
            a++;
 
        else
            b++;
    }
 
    // return final sma result
    cout<<result;
}