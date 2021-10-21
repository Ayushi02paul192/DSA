
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue <pair<long long,pair<int,int>>> pq;
        vector<int> result;
        vector<vector<int>> answer;
        for(int i=0;i<points.size();i++)
        {
        //     long long int a=points[i][0]*points[i][0];
        //     long long int b=points[i][1]*points[i][1];
        //     pq.push({a+b,{v[i]}});
        //     if(pq.size()>k)
        //         pq.pop();
        // }
        // vector<vector<int>> v;
        // while(pq.empty()==false)
        // {
        //     v=pq.top().second;
        //     pq.pop();
        // }
        // return v;
              pq.push({pow(points[i][0],2) + pow(points[i][1],2), {points[i][0], points[i][1]}});
            
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(pq.size()>0)
        {
            result.push_back(pq.top().second.first);
            result.push_back(pq.top().second.second);
            pq.pop();
            answer.push_back(result);
            result.clear();               // have to empty it otherwise elements will keep on adding in the past result;
        }
        return answer;
    }
};