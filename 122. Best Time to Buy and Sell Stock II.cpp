class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        int min=INT_MAX,totalpr=0,temp;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            temp=prices[i]-min; // if the stock is sold on that day itself then the profit is calculated using temp
            if(temp>0){
                totalpr=totalpr+temp;
                min=prices[i];
            }
            
        }return totalpr;
        
        
    }
};