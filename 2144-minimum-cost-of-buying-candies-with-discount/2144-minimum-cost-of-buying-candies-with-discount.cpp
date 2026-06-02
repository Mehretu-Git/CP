class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int max_cost = 0;
        int discount = 0;
        if(cost.size()==1) return cost[0];
        else if(cost.size() == 2) return  cost[0] + cost[1];
        else{
            for(int i = cost.size() - 1; i>=0; i--){
                max_cost += cost[i];
            }
            for(int i = cost.size() - 3; i>=0;){
                discount += cost[i];
                i -= 3;
            }
        }
        return max_cost - discount;
    }
};