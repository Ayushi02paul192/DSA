class Solution {
public:
   vector<int> frequencySort(vector<int>& nums) {
//           map<int,int> mp;
//         for(int i=0;i<nums.size();i++)
//             mp[nums[i]]++;
//          vector<int> v;
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         for(auto i:mp)
//         {
//             pq.push({i.second,i.first});
           
//         }
//          while(pq.size()>0)
//         {
//             int freq=pq.top().first;
//              int element=pq.top().second;
//              for(int i=1;i<=freq;i++)
//                  v.push_back(element);
//              pq.pop();
//         }
//        sort(v.begin(),v.end());
//         return v;
//     }
     unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++)
            um[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i:um){
            pq.push({i.second,-i.first});
        }
        vector<int> ans;
        while(!pq.empty()){
            int cnt = pq.top().first;
            int ele = -pq.top().second;
            while(cnt--)
                ans.push_back(ele);
            pq.pop();
        }
        return ans;
   }
};