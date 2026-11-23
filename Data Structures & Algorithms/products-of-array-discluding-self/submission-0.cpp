class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int mult=1;
        int zeroCnt =0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                mult*=nums[i];
            }else{
                zeroCnt++;
            }
        }

        if(zeroCnt>1){
            return ans;
        }
        for(int i=0;i<n;i++){
            int value;
            if(nums[i]!=0){
                value = zeroCnt==1?0:mult/nums[i];
            }else{
                value = mult;
            }

            ans[i]=value;
        }

        return ans;
    }
};
