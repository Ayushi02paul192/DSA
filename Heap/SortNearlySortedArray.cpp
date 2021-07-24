#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int arr[n],a,c=0;
	   // for(int i=0;i<n;i++)
	   // cin>>arr[i];
	   vector<int> v;
	    priority_queue<int,vector<int>,greater<int>> pq;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        pq.push(a);
	        if(pq.size()>k)
	        {
	            v.push_back(pq.top());
	            pq.pop();
	        }
	    }
	    while(pq.size() > 0)
	    {
	        v.push_back(pq.top() );
	        pq.pop(); }
	    for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}