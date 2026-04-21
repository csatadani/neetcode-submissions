class Solution {
public:
    int climbStairs(int n) {
        if(n == 0){
            return 0;
        }
        int steps = 0;
        int prev = 1;
        int prevprev = 0;
        int it = 0;
        while(it < n){
            steps = prev + prevprev;
            prevprev = prev;
            prev = steps;
            it++;
        }
        return steps;
    }
};
