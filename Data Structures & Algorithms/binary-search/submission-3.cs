public class Solution {
    public int Search(int[] nums, int target) {
        int lindex = 0;
        int rindex = nums.Length-1;
        int m;

        while(lindex<=rindex){
            m = (lindex+rindex)/2;
            if(nums[m]<target){
                lindex = m + 1;
            }
            else if(nums[m]> target){
                rindex = m - 1;
            }
            else{
                return m;
            }
        }
        return -1;
    }
}
