 class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> top;
        map <int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxf=-1;
        int maxe=-1;
        while(k--){
            for(auto i:m){
                if(i.second>maxf){
                    maxf=i.second;
                    maxe=i.first;
                }
            }
            top.push_back(maxe);
            m.erase(maxe); //or we can change the frequency as well ---->m[maxe]=0;
            maxe=-1;
            maxf=-1;
        }
        return top;
        
        
    }
};