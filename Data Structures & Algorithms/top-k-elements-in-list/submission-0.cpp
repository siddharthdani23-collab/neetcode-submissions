class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i:nums)
        {
            count[i]++;
        }
        vector<pair<int,int>> dup;
        for(const auto& p :count)
        {
            dup.push_back({p.second,p.first});
        }
        sort(dup.begin(),dup.end(),greater());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(dup[i].second);
        }
        return ans;
    }
};
