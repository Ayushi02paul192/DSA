class Solution {
public:
    int search(vector<int>& ar, int target)
    {
        int low=0,high=ar.size()-1,mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(ar[mid]==target)
                return mid;
            else if(ar[mid]<target)
                low=mid+1;
            else
                high=mid-1;
                
        }
        return -1;
    }
};