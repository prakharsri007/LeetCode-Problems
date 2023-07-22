class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map <int,int> map;
        //update frequencies in the map
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        int maxfreq=-1;
        int max=-1;
        //check which is the maximum frequency by iterating through the entire map
        for(auto i:map){
            if(i.second>maxfreq && i.first%2==0 ){//max update condition
                maxfreq=i.second;
                max=i.first;
            }
            
        }
        return max;
        
    }
};