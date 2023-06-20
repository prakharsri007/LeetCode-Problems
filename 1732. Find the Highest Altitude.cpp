class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int add=0;
        for(int  i=0;i<gain.size();i++){
            add=add+gain[i];
            if(add>max){
                max=add;
            }
        }
        return max;

        
    }
};