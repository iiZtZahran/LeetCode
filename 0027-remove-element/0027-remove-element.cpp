class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Index for the next non-val element
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Move non-val elements to the beginning
                k++;
            }
        }
        return k; // k is the number of non-val elements
    }
};