class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            count += n & 1;  // Add 1 if the last bit is 1
            n >>= 1;         // Right shift by 1 to check next bit
        }
        return count;
    }
};
