class Solution {
public:
    int romanToInt(string s) {
        int sum = toNumber(s[0]), currentNumber = 0;
        int previousNumber = sum;
        for (string::const_iterator i = s.begin()+1; i != s.end(); ++i) {
             currentNumber = toNumber(*i);
             sum += currentNumber;
             if (currentNumber > previousNumber) {
                 sum -= previousNumber<<1;
             }
             previousNumber = currentNumber;
        }
        return sum;
    }
private:
    int toNumber(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
    }
};
