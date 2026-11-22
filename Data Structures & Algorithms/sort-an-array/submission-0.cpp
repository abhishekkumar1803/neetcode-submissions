class Solution {
public:
    void merge(vector<int> &arr, int l, int mid, int r){
        int i =l , j=mid+1;
        int k =l;
        vector<int>v;
        while(i<=mid && j<=r){
            if(arr[i]>=arr[j]){
                v.push_back(arr[j]);
                j++;
            }else{
                v.push_back(arr[i]);
                i++;
            }
        }

        while(i<=mid){
            v.push_back(arr[i]);
            i++;
        }

        while(j<=r){
            v.push_back(arr[j]);
            j++;
        }

        for(int p=0;p<v.size();p++){
            arr[l+p]=v[p];
        }
    }
    void mergeSort(vector<int> &arr, int l, int r){
        if(l<r){
            int mid = (l+r)/2;

            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr, l, mid, r);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        mergeSort(nums,0,n-1);

        return nums;
    }
};