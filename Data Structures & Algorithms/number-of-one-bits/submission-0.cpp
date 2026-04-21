class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t l = 1;
        int sum = 0;
        for(int i = 0; i<sizeof(n)*8; i++){
            if(n & l){
                sum++;
            }
            l = l << 1;
        }
        return sum;

    }
};
