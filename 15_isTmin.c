#include <stdio.h>

/*
 * isTmin - returns 1 if x is the minimum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 1
 */

 /* working
 Tmin = 1000 0000 0000 0000 0000 0000 0000 0000 
        0111 1111 1111 1111 1111 1111 1111 1111  //  Tmin - 1  = Tmax

 if not, return 0


 if         1000 0000 0000 0000 0000 0000 0000 0000 
 mask       1000 0000 0000 0000 0000 0000 0000 0001  //XOR  80000001
 return     0000 0000 0000 0000 0000 0000 0000 0001

building the mask: (1 << 31) + 1    //works 

use x ^ x = 0

 */
int isTmin(int x)
{
    int Tmin = 1 << 31; 

    // int mask = (1 << 31) + 1; 

    // return x ^ mask;

    return !(x ^ Tmin);  

    //! vs ~ 
}

int test_isTmin(int x)
{
    return x == 0x80000000;
}

int main(void)
{
    int x = 1 << 31;
    printf("expected: %x\n", isTmin(x));
    printf("actual  : %x\n", test_isTmin(x));
}
