class Solution {
public:

    int operate(std::vector<char>& chars) {
        int n = chars.size();
        int anchor = 0; // Anchor to track the start of each group
        int write = 0; // Position to write compressed characters

        for (int read = 0; read < n; ++read) {
            if (read + 1 == n || chars[read] != chars[read + 1]) {
                chars[write++] = chars[anchor]; // Write the character
                if (read > anchor) {
                    // If the group has more than one character, write its count
                    std::string count = std::to_string(read - anchor + 1);
                    for (char c : count) {
                        chars[write++] = c;
                    }
                }
                anchor = read + 1; // Move the anchor to the start of the next group
            }
        }

        return write;
    }

    int compress(vector<char>& chars) {
        return operate(chars);
    }
};