class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int area=0;
        int i=0;
        int j=height.size()-1;

        while(i<j){
            int mini=min(height[i],height[j]);
            area=mini*(j-i);
            if(area>ans){
                ans=area;
            }
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;

    }
};