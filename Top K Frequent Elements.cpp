class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int>m;
         priority_queue<pair<int,int>>p;
         vector<int>ans;
         int n=nums.size();
         for(int i=0;i<n;i++){
            m[nums[i]]++;
         }
         
         for(auto &i:m){
            p.push({i.second,i.first});
         }
         while(k-- &&!p.empty()){
            ans.push_back(p.top().second);
            p.pop();
         }
         return ans;
    }
};
