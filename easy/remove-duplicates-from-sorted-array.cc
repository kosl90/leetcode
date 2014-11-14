class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int m = n;
        int i = 0, j = i + 1;
        for (int i = 0, j = i + 1; j < n; ++j) {
            if (A[i] == A[j]) {
                --m;
                continue;
            }
            A[++i] = A[j];
        }
        return m;
    }
};
