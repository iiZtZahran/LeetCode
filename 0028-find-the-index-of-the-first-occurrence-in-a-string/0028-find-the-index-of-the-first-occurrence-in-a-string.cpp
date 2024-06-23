class Solution {
public:
    int strStr(string haystack, string needle) {
        int j = 0;
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[j]) {
                j++; 
                if (j == needle.size()) { 
                    return i - needle.size() + 1; // Found the entire needle!
                }
            } else {
                // Reset j, but adjust i to avoid skipping potential matches
                i -= j; 
                j = 0; 
            }
        }
        return -1; // Needle not found within haystack
    }
};