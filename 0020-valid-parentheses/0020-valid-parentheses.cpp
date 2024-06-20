class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> bracketMap;
        bracketMap['{'] = '}';
        bracketMap['['] = ']';
        bracketMap['('] = ')';

        std::stack<char> stack;

        for (char c : s) {
            if (bracketMap.count(c)) {
                stack.push(c);
            } else if (!stack.empty() && bracketMap[stack.top()] == c) {
                stack.pop();
            } else {
                return false; // Mismatched or unbalanced bracket
            }
        }

        return stack.empty(); // All brackets should be matched and removed
    }
};