class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        vector<int>idxOfVal,idxNonVal;

        for(int i=0;i<n;i++){
            if(nums[i]==val){
                idxOfVal.push_back(i);
            }else{
                idxNonVal.push_back(i);
            }
        }

        int m = idxNonVal.size();
        for(int i=0;i < min(idxOfVal.size(), idxNonVal.size());i++){
            if(idxOfVal[i]<idxNonVal[m-i-1]){
                swap(nums[idxOfVal[i]],nums[idxNonVal[m-i-1]]);
            }
        }

        return m;
    }
};