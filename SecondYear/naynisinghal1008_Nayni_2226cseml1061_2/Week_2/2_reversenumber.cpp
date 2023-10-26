#include <sstream>
long reverseBits(long n) {
     long reversed = 0;
    int bits = 32; 
    while (n > 0) {
        reversed = (reversed << 1) | (n & 1);
        n = n >> 1;
        bits--;
    }

    
    reversed = reversed << bits;

    return reversed;


}