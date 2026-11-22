class Solution {
public:
    void swapNumber(int &a, int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void sortColors(vector<int>& nums) {
        int n=nums.size();

        int low=0,high=n-1;

        for(int k=low;k<=high;k++){
            if(nums[k]==2){
                swapNumber(nums[k],nums[high]);
                high--;
                k--;
            }else if(nums[k]==0){
                swapNumber(nums[k],nums[low]);
                low++;
            }
        }
    }
};