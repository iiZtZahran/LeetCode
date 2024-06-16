class Solution {
public:
    bool isPalindrome(int x) {
        //make sure its not negative or the last number not equal 0
        if( (x < 0) || (x%10 == 0 && x != 0) ){
            return false;
        }

        double original = x;
        double reversed = 0;

        while(x > 0 ){
            reversed = reversed*10 + x%10; 
            x /= 10;
        }
        return reversed == original;
    }
};