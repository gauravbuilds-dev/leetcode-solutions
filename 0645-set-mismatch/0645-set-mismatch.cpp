class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
            int val=nums[i];
            freq[val]++;
        }

        int missing=0,repeating=0;
        for(int i=1;i<=n;i++){
            if(freq[i] == 0){
                missing=i;
            }else if(freq[i]>1){
                repeating = i;
            }
        }
        return {repeating,missing};
    }
};