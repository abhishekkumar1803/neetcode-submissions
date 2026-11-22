class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        int el = -1, cnt=0;

        for(int i=0;i<n;i++){
            if(cnt==0){
                el = nums[i];
                cnt++;
            }else if(nums[i]==el){
                cnt++;
            }else{
                cnt--;
            }
        }

        int count =0;

        for(int i=0;i<n;i++){
            if(nums[i]==el){
                count++;
            }
        }
        if(count>n/2){
            return el;
        }else{
            return -1;
        }
    }
};