class Solution {
public:
    int climbStairs(int n) {
        // f(n) = f(n-1) + f(n-2)
        // 0->1, 1->1, 2->2, 3->3
        int x = 1, y = 1;
        while (n--) {
            x = x + y;
            y = x - y;
        }
        return y;
    }
};
