#include <stdio.h>

/* 
 * bitOr - x|y using only ~ and & 
 *   Example: bitOr(6, 5) = 7
 *   Legal ops: ~ &
 *   Max ops: 8
 *   Rating: 1
 */
int bitOr(int x, int y)
{
    return ~((~x) & (~y));
}

int test_bitOr(int x, int y)
{
    return x | y;
}

int main(void)
{
    int x = -25;
    int y = -2535;
    printf("expected: %x\n", bitOr(x, y));
    printf("actual  : %x\n", test_bitOr(x, y));
}
