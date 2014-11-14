class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int ai = m - 1; // m == 0;
        int bi = n - 1;
        for (int i = m + n - 1; i >= 0 && bi >= 0; --i) {
            if (ai < 0) {
                A[i] = B[bi--];
                continue;
            }

            if (A[ai] > B[bi]) {
                A[i] = A[ai--];
            } else {
                A[i] = B[bi--];
            }
        }
    }
    
    
};
