class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int robone = 0;
        int robtwo = 0;
        for(int i = 0; i<nums.size(); i++){
            int temp = max(nums[i] + robone, robtwo);
            robone = robtwo;
            robtwo = temp;
        }

        return max(robone, robtwo);
        
    }
};
