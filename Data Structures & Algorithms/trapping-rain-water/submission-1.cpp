class Solution {
public:
    int trap(vector<int>& height) {
        int lp=0,rp=height.size()-1,mlw=height[lp],mrw=height[rp],water=0;
        while(lp<rp)
        {
            if (mlw<mrw)
            {
                int w=mlw-height[lp];
                if(w>0) water+=w;
                lp++;
                mlw=max(mlw,height[lp]);
            }
            else
            {
                int w=mrw-height[rp];
                if(w>0) water+=w;
                rp--;
                mrw=max(mrw,height[rp]);
            }
        }
        return water;
    }
};
