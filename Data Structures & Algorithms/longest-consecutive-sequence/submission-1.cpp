class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int counta=1,countb=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1) countb++;
            else
            {
                counta=max(counta,countb);
                countb=1;
            }
        }
        int ans=max(counta,countb);
        return ans;
    }
};
