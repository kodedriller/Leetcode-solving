// 75. Sort Colors

//dutch

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0;
//         int mid = 0;
//         int high = nums.size() - 1;
        
//         while(mid <= high){
//             if(nums[mid] == 0){
//                 swap(nums[low], nums[mid]);
//                 low++;
//                 mid++;
//             }
//             else if(nums[mid] == 1){
//                 mid++;
//             }
//             else if(nums[mid] == 2){
//                 swap(nums[mid], nums[high]);
//                 high--;
//             }
//         }
//     }
// };

// two way
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red_count = 0, white_count = 0, blue_count = 0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                red_count++;
            }else if(nums[i]==1){
                white_count++;
            }else{
                blue_count++;
            }
        }
        int i=0;
        while(red_count>0){
            nums[i]=0;
            i++;
            red_count--;
        }
        while(white_count>0){
            nums[i]=1;
            i++;
            white_count--;

        }
        while(blue_count>0){
            nums[i]=2;
            i++;
            blue_count--;
        }
    }
};
