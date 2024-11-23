class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 , right = height.size() - 1 , max_area = 0  ; 
        while(left < right ){
           int cur_area = (right - left) * min(height[left],height[right]);
           max_area = max( cur_area , max_area );
           //move the smallest side 
           if(height[left] < height[right]){
            left++;
           }
           else {
            right--;
           }
        }
        return max_area;
    }
};