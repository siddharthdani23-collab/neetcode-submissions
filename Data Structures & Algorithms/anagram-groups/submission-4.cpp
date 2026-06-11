class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            vector<int> freq(26,0);
            for(int j=0;j<strs[i].size();j++)
            {
                freq[strs[i][j]-'a']++;
            }
            string key="";
            for(int i=0;i<26;i++)
            {
                key+=to_string(freq[i])+" ";
            }
            mp[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(const auto& pair:mp)
        {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
