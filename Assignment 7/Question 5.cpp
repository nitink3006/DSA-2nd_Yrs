class Solution {
public:
    int mySqrt(int x) {
        if (x <= 1) return x;
        double res = x;
        double last;
        do {
            last = res;
            res = (res + x / res) / 2;
        } while (abs(res - last) > 0.1);
        return (int)res;
    }
};


Question 69 on Leetcode
