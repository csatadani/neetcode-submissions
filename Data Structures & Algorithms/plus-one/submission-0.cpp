class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = 0;
        vector<int> res = digits;
        for(int i = digits.size()-1; i >= 0; i--){
            if(digits[i] < 9){
                res[i] = digits[i]+ 1;
                return res;
            }
            else{
                res[i] = 0;
            }
        }
        res.insert(res.begin(), 1);
        return res;
    }
};
