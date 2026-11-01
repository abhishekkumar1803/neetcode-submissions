class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int num1=INT_MIN,num2=INT_MIN;
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            num1=nums[i];
            int diff = target-nums[i];
            if(mp.find(diff)!=mp.end()){
                num2=diff;
                break;
            }
            mp[nums[i]]++;
        }

        int idx1=-1,idx2=-1;
        vector<int>ans;

        for(int i=0;i<n;i++){
            if(num1==nums[i] && idx1==-1){
                idx1=i;
                ans.push_back(i);
            }
            else if(num2==nums[i] && idx2==-1){
                idx2=i;
                ans.push_back(i);
            }
        }
        return ans;
    }
};
