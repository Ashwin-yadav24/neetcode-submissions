// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int k=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=val){
//                 nums[k++]=nums[i];
//             }
//         }
//         return k;
//     }
// };

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]==val){
                nums[i]=nums[--n];
            }else{
                i++;
            }
        }
        return n;
    }
};