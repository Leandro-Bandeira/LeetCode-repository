#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit2(vector<int>& prices) {
      int maxProfit = 0;
      int pricesSize = prices.size();
      for(int i = 0; i < pricesSize; i++){
        for(int j = i + 1; j < pricesSize; j++){
          if(prices[j] - prices[i] >= maxProfit){
            maxProfit = prices[j] -prices[i];
          }
        }
      }

      return maxProfit;
            
    }
    int maxProfit(vector<int>& prices){
      int maxProfit = 0;
      int indexBestSell = 0;
      int indexBestBuy = 0;
      int indexSell = 0;
      int indexBuy = 0;
      
      for(int i = 0; i < prices.size(); i++){
        
        
        if(i < prices.size() - 1 && prices[i] <= prices[indexBuy]){
          indexBuy = i;
          if (indexBuy > indexSell){
            indexSell = indexBuy;
          }  
        } 
        
        if(i >= indexBuy && prices[i] >= prices[indexSell]){
          indexSell = i;
        }
        int currentProfit = prices[indexSell] - prices[indexBuy];
        if (currentProfit >= maxProfit){
          maxProfit = currentProfit;
      
        }
        cout << "Current profit: " << currentProfit << "\n";
        cout << prices[indexBuy] << " " << prices[indexSell] << "\n";  
      }
      /*
      if(indexBestSell == indexBestBuy){
        return 0;
      }else{
        return (prices[indexBestSell] - prices[indexBestBuy]);
      }
      */
      return maxProfit;
     }
    int maxProfit3(vector<int>& prices){
      int maxProfit = 0;
      int indexSell = 0;
      int indexBuy = 0;
      int currentProfit = 0;
      for(int i = 0; i < prices.size(); i++){
        
        
        if(i < prices.size() - 1 && prices[i] <= prices[indexBuy]){
          indexBuy = i;
          if (indexBuy > indexSell){
            indexSell = indexBuy;
          }  
        } 
        
        if(i >= indexBuy && prices[i] >= prices[indexSell]){
          indexSell = i;
        }
        currentProfit = prices[indexSell] - prices[indexBuy];
        if (currentProfit >= maxProfit){
          maxProfit = currentProfit;
      
        }
        
      }
      return maxProfit;
     }
         
    
};


int main(){
  vector <int> prices = {3,2,6,5,0,3};

  Solution sol;
  cout << sol.maxProfit(prices);
  
  return 0;
}
