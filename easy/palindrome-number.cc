class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        int len = numLen(x);
        
        if (len < 2) return true;
        
        int y = 0;
        int halfLen = len >> 1;
        for (int i = 0; i < halfLen; i++) {
            y = 10*y + x % 10;
            x /= 10;
        }
        
        if ((len & 1) != 0) {
            x /= 10;
        }

        return x == y;
    }
    
private:
    int numLen(int x) {
        int count = 0;
        while (x) {
            x/=10;
            count++;
        }
        return count;
    }
};
