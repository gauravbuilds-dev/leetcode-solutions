class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int n = nums.size();
        sort(nums.begin() , nums.end());

        int kth = nums[n - k];

        return kth;
    }
};