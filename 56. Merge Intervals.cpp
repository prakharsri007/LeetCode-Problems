class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) { 
        sort(intervals.begin(),intervals.end());//the intervals need to be in a sorted fashion
        vector<vector<int>>ans;//to store final answers
        vector<int>temp;//store the intermediate intervals
        if(intervals.size()==1){//if only 1 interval is there then just return that only as the answer
            return intervals;
        }
        for(int i=0;i<intervals.size();i++){
            if(temp.empty()){
                temp.push_back(intervals[i][0]);
                temp.push_back(intervals[i][1]);
                continue;
            }
            else if(intervals[i][0]<=temp.back() && intervals[i][1]>=temp.back()){
                temp.back()=intervals[i][1];
                if(i==intervals.size()-1){//if we are at the last interval then we need to push it back to ans because the for loop wont run again as it has reached the end 
                    ans.push_back(temp);
                }
            }
            else if(intervals[i][0]<=temp.back() && intervals[i][1]<temp.back()){
                if(i==intervals.size()-1){//if we are at the last interval then we need to push it back to ans because the for loop wont run again as it has reached the end 
                    ans.push_back(temp);
                }
            }
            else if(intervals[i][0]>temp.back()){
                ans.push_back(temp);
                temp.clear();
                temp.push_back(intervals[i][0]);
                temp.push_back(intervals[i][1]);
                if(i==intervals.size()-1){//if we are at the last interval then we need to push it back to ans because the for loop wont run again as it has reached the end 
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};