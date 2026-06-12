class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> v(nums.size()+1);
        unordered_map<int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto& i:mp)
        {
            v[i.second].push_back(i.first);
        }
        vector<int> ans;
        for(int i=nums.size();i>=1;i--)
        {
            for(int j:v[i])
            {
                ans.push_back(j);
                if(ans.size()==k) return ans;   
            }
        }
        return ans;
    }
};
