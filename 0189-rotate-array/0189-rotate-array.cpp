class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size() ;

        k = k % n;

        int kthIdx = (n - k) % n ;

        vector<int>ans(n);

        for( int i = 0 ; i < n ; i++){

            ans[i] =  nums[kthIdx];

            kthIdx = (kthIdx + 1) % n ;

        }

        nums = ans;
    }
};