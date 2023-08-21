//**formula used-> min(leftmax,rightmax)-height[i];
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        vector<int> leftmax(n);//for storing leftmax element for each element in the given array
        int lm=height[0];
        leftmax.push_back(height[0]);
        for(int i=0;i<n;i++){
            leftmax[i]=max(lm,height[i]);
            if(height[i]>lm)
            lm=height[i];
        }

        vector<int> rightmax(n);//for storing rightmax element for each corresponding element in the given array
        int rm=height[n-1];
        for(int i=n-1;i>=0;i--){
            rightmax[i]=max(rm,height[i]);
            if(height[i]>rm)
            rm=height[i];
        }

        int ans=0;//counts water;
        for (int i=0;i<n;i++){
            ans=ans+ (min(leftmax[i],rightmax[i])-height[i]);//formula **
        }
        return ans;
        
        
    }
};