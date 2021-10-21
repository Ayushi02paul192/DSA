// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int idx=0;
int find(int in[] , int start , int end , int root){
for(int i=start;i<=end;i++){
if(in[i]==root){
return i;
}
}
}
Node *tree(int in[],int pre[],int i ,int n){
if(i>n){
return NULL;
}
int root=pre[idx++];
Node *temp=new Node(root);
temp->left=NULL;
temp->right==NULL;
if(i==n)
return temp;
int pos=find(in,i,n,root);

temp->left=tree(in,pre,i,pos-1);
temp->right=tree(in,pre,pos+1,n);
return(temp);
}
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        idx=0;
return(tree(in,pre,0,n-1));
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends