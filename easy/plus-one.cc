class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int c = 1;
        vector<int> v(digits.begin(), digits.end());
        // not using vector<int>::size_type here, because negative number will cause overflow.
        for (int i = v.size()-1; c != 0 && i >= 0; --i) {
            int num = v[i] + c;
            c = num / 10;
            v[i] = num % 10;
        }
        
        if (c != 0) v.insert(v.begin(), 1, c);
        return v;
    }
};
