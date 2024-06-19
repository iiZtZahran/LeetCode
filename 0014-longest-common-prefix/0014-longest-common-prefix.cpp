class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix  = strs[0];

        for (int i = 0 ; i < strs.size() ; i++){
            int j = 0 ; 
            for (j = 0 ; j < strs[0].size() ; j++){
                if( prefix[j] != strs[i][j] ){
                    break;
                }
            }
                prefix = prefix.substr(0,j);

             
            
        }
        return prefix;
    }
};