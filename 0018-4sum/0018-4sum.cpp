class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        for (int i = 0 ; i < n ; i++){
            if ( i > 0 && nums[i] == nums [i-1]){
                continue;
            }
            for (int j = i+1 ; j < n ; j++){
                if ( j > i+1 && nums[j] == nums [j-1]){
                    continue;
                }
               int third = j+1 , fourth = n-1;
                while(third < fourth){
                    long long sum = (long long)nums[i] + nums[j] + nums[third] + nums [fourth];
                    if ( sum < target){
                        third++;
                    }else if (sum > target){
                        fourth--;
                    }else{
                        ans.push_back({nums[i] , nums[j], nums[third], nums[fourth]});
                        third++; fourth--;
                        while ( third < fourth && nums[third] ==  nums[third-1]){
                            third++;
                        }
                        while (third < fourth && nums[fourth] == nums[fourth+1]){
                            fourth--;
                        }
                    }
                }
            }
        }

        return ans;
    }
};