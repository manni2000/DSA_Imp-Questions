// // Sort an array of 0s, 1s and 2s.
// This problem is a variation of the popular Dutch National flag algorithm.

// Intuition: In this approach, we will be using 3 pointers named low, mid, and high. 
// We will be using these 3 pointers to move around the values. 
// The primary goal here is to move 0s to the left and 2s to the right of the array and at the same time all the 1s shall be in the middle region of the array and hence the array will be sorted.
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        
        while(mid<=high){
            switch(nums[mid]){
              
                case 0: 
                    swap(nums[low++],nums[mid++]);
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }
};