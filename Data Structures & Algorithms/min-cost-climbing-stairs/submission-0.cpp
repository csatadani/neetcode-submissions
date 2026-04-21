class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.empty()){
            return 0;
        }
        int costone = cost[cost.size()-1];
        int costtwo = 0;
        int next = 0;
        for(int i = 2;i<=cost.size();i++){
            next = min(cost[cost.size()-i]+costone,cost[cost.size()-i]+costtwo);
            costtwo = costone;
            costone = next;
        }
        return min(costtwo, next);
    }
};
