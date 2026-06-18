class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            int pt1=i+1,pt2=nums.size()-1;
            int target=0-nums[i];
            while(pt1<pt2)
            {
                if(nums[pt1]+nums[pt2]>target) pt2--;
                else if(nums[pt1]+nums[pt2]<target) pt1++;
                else
                {
                    vector<int> temp={nums[i],nums[pt1],nums[pt2]};
                    ans.push_back(temp);
                    pt1++;
                    pt2--;
                    while(pt1<pt2&&nums[pt1]==nums[pt1-1])pt1++;
                    while(pt1<pt2&&nums[pt2]==nums[pt2+1])pt2--;
                }
            }
        }
        return ans;
    }
};
