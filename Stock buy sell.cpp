class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int s;//represent index of buying point
       int e;//represents index of selling point
       vector<vector<int>>ans;
       int buy=1;  //buy =1,means buy allowed
       for(int i=0;i<n-1;i++)//last element ko baad me traverse kr rhe hain
       {
           if(buy)
           {
               if(A[i]<A[i+1])
               {
                   buy=0;//means now we have to sell
                   s=i;//buying start point marked
               }
           }
          else if(!buy)//means we have to sell buy=0
          {
               if(A[i]>A[i+1])
               {
                   e=i;//selling pount marked
                   ans.push_back({s,e});//send both selling and buying point
                   buy=1;//again ready to buy
               }
           }
           
       }
       //after the end of loop if buy is false then we have to sell the last item
       if(buy==0)
       {
       ans.push_back({s,n-1});
    }
    return ans;
    }
};