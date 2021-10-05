class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el = nums[0], cnt = 1, size = nums.size(), i;
        
        for(i = 1; i < size; i++) {
            (nums[i] == el) ? cnt++ : cnt--;
            if(!cnt) {
                el = nums[i];
                cnt = 1;
            }            
        }
        
        return el;
    }
};
