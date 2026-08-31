class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size() - 1;
        while (low < high){
            int mid = low + (high - low ) / 2;
            // If mid element is greater than rightmost, min lies on right side
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }else{
                high = mid;  // min lies on left including mid
            }
        }

        return nums[low];   // low will point to minimum
    }
};