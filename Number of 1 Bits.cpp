class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;

        for(int bit = 0; bit < 32; bit++){
            if(n & (1 << bit))
                cnt++;
        }
        return cnt;

        // or just we can use the __builtin_popcount(int n) the calculate the number of ones in the binary representation in O(1)
    }
};