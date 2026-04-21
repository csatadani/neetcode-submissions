class Solution {
public:
    int climbStairs(int n) {
        if(n == 0){
            return 0;
        }
        int one = 1, two = 1;
        for (int i = 1;i<n;i++){
            int next = one + two;
            two = one;
            one = next;
        }
        return one;
        
    }
};
