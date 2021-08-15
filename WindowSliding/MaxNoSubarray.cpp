vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    vector<int> ans;
    deque <int> q;
    int i=0,j=0;
    if(B>A.size())
    {
        ans.push_back(*max_element(q.begin(),q.end()));
            return ans;
    }
    while(j<A.size())
    {
        while(q.size()>0 && q.back()<A[j])
        q.pop_back();
        q.push_back(A[j]);
        if(j-i+1<B)j++;
        else if(j-i+1==B)
        {
            ans.push_back(q.front());
            if(q.front()==A[i])
            q.pop_front();
            i++;
            j++;
        }
    }
    return ans;
}
