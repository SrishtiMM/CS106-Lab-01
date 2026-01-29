#include <stdio.h>

/* 
 * evenBits - return word with all even-numbered bits set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int evenBits(void)
{
//     int pattern = 0x55;
// //return pattern;
//     int ans = pattern << 8;
// // return ans;
//     ans += pattern;
//     int half = ans; 
// // return ans;
//     ans << 16;
//     ans += half; 
//     return ans;

return (((0x55 << 8) | (0x55 << 16) | (0x55 < 24) | (0x55)) << 8 | 0x55);   //why 5 timesssss 

}

int test_evenBits(void)
{
    int result = 0;
    int i;
    for (i = 0; i < 32; i += 2)
        result |= 1 << i;
    return result;
}

int main(void)
{
    printf("expected: %x\n", evenBits());
    printf("actual  : %x\n", test_evenBits());
}
