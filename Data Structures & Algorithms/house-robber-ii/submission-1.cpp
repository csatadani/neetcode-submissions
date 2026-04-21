class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        vector<int> sub1{nums.begin(), nums.end()-1};
        vector<int> sub2{nums.begin()+1, nums.end()};
        return max(helper(sub1), helper(sub2));
    }

    int helper(vector<int>& sub){
        if(sub.empty()){
            return 0;
        }
        int robone = 0;
        int robtwo = 0;
        for(int i = 0;i<sub.size();i++){
            int temp = max(robone + sub[i], robtwo);
            robone = robtwo;
            robtwo = temp;
        }
        return max(robone, robtwo);
    }
};
