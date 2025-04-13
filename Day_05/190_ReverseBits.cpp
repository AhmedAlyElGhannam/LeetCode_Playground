class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        // swap words
        n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16);
        // swap bytes
        n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
        // swap nibbles
        n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
        // swap each 2 bits
        n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
        // swap each bit
        n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
        
        return n;
    }
};
