class Solution {
public:
    int lengthOfLastWord(const char *s) {
        if (s == NULL) {
            return 0;
        }
        
        int len = 0;
        bool isNew = false;
        for (int i = 0; s[i] != 0; ++i) {
            if (s[i] == ' ') {
                isNew = true;
                continue;
            }
            if (isNew) {
                len = 0;
                isNew = false;
            }
            len += 1;
            
        }
        
        return len;
    }
};
