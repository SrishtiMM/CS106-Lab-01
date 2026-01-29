#include <stdio.h>
#include <limits.h>

/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */

 /* working
 tmax = 0111 1111 1111 1111 + 1
 tmax = 1000 0000 0000 0000
 they are negations!!
 */ 
int tmin(void)
{
    //trying to use one byte  only, and 4 operators

    return ~INT_MAX;        //works

    return INT_MAX + 1;     //works

    return 1 << 31;         //works 
}

int test_tmin(void)
{
    return 0x80000000;
}

int main(void)
{
    printf("expected: %x\n", tmin());
    printf("actual  : %x\n", test_tmin());
}
