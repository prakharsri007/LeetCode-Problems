//Most Optimal 3 Pointerr Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;//start pointer zero wala
        int j=nums.size()-1;//end pointer two wala
        int x=0;//midlle pointer
        while(x<=j){
            if(nums[x]==0){
                swap(nums[i],nums[x]);
                i++;
                x++;
            }
            else if(nums[x]==1){
                x++;
            }
            else if(nums[x]==2){
                swap(nums[x],nums[j]);
                j--;
            }
        }
    }
};



/*/BUBBLE SORT SOLUTION
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }        
    }
};

/* BRUTE FORCE SOLUTION
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0;
        int white=0;
        int blue=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            red++;
            else if(nums[i]==1)
            white++;
            else
            blue++;
        }
        int final=0;
        while(red!=0 && final<nums.size()){
            nums[final]=0;
            red--;
            final++;
        }
        while(white!=0 && final<nums.size()){
            nums[final]=1;
            white--;
            final++;
        }
        while(blue!=0 && final<nums.size()){
            nums[final]=2;
            blue--;
            final++;
        }
        
    }
};
*/


