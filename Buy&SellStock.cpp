//Problem link- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Description--
//121. Best Time to Buy and Sell Stock
//Say you have an array for which the ith element is the price of a given stock on day i.

//If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

//Note that you cannot sell a stock before you buy one.

/*

imagine the array as a graph 
eg : arr= [7, 1, 5, 3, 6, 4]


    visualize this as: 
    
    x
    x           x
    x     x     x
    x     x     x  x
    x     x  x  x  x 
    x     x  x  x  x
    x  x  x  x  x  x
    
    The points of interest are the peaks and valleys in the given graph.
    We need to find the largest peak(arr[4]) following the smallest valley(arr[1]). 
    We can maintain two variables - minprice and maxprofit corresponding to the smallest valley and
    maximum profit (maximum difference between selling price and minprice) obtained so far respectively.
    
    the code for the same has been given below :
*/



class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int min=INT_MAX;
        int profit=0;
        for(int i=0;i<n;i++)
        {
            if(min>a[i])
                min=a[i];
            if(profit<a[i]-min)
                profit=a[i]-min;
        }
        return profit;
        
    }
};
