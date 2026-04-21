class KthLargest {
private:
    int mk;
    vector<int> mnums;
public:
    KthLargest(int k, vector<int>& nums) {
        mk = k;
        mnums = nums;
    }
    
    int add(int val) {
        int klarge = 1000;
        int l = 0;
        mnums.push_back(val);
        sort(mnums.begin(), mnums.end(), greater<int>());
        for(int i : mnums){
            if(i <= klarge && l != mk){
                klarge = i;
                l++;
            }
        }
        return klarge;
    }
};
