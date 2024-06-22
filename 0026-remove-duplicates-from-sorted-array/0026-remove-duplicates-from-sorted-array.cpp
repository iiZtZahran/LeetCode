class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1 ; // Initialize a pointer i to keep track of the position to replace the duplicate elements
        for(int i = 1; i < nums.size() ; i++ ){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i]; // Replace the element at position i with the current element
                j++; // Move the pointer i to the next position
            }
        }
        return j;

    }
};