#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1000000007;
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n && arr[largest]<arr[left])
    largest=left;
     if(right<n && arr[largest]<arr[right])
    largest=right;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    heapify(arr,n,i);
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
void printHeap(int arr[],int n)
{
    cout<<"Heap Sort \n";
    for(int i=0;i<n;i+=1)
    cout<<arr[i]<<" ";
}
int main()
{
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    cout.tie(NULL);  
    int arr[]={12,34,15,36,87,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    // ll t=1;
    // cin>>t;
    
    // while(t--)
    // {
     heapSort(arr,n);
     printHeap(arr,n);
     
    // }
}