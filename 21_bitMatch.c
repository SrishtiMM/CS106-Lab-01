#include <stdio.h>

/* 
 * bitMatch - Create mask indicating which bits in x match those in y
 *            using only ~ and & 
 *   Example: bitMatch(0x7, 0xE) = 0x6
                0111
                1110 
                0110

                Xnor

 *   Legal ops: ~ & |  //OR WAS ALLOWED LMAO
 *   Max ops: 14
 *   Rating: 1
 */


 /*
 instructor way

 1  1 = 1 (can use and)
0   0  = 1   (not 0 and not 0)

(x nand y)  and ( x or y)

1  0 
 */
int bitMatch(int x, int y)
{
    int Nand = ~(x & y);
    int Or = ~((~x)& (~y));
    return  ~(Nand & Or);

    //yeyyyyy
}

int test_bitMatch(int x, int y)
{
    int i;
    int result = 0;
    for (i = 0; i < 32; i++) {
        int mask = 1 << i;
        int bit = (x & mask) == (y & mask);
        result |= bit << i;
    }
    return result;
}

int main(void)
{
    int x = 0xFFFFFFFF;
    int y = 0xFFFA0FFF;
    printf("expected: %x\n", bitMatch(x, y));
    printf("actual  : %x\n", test_bitMatch(x, y));
}
