#include <stdio.h>
#include <limits.h>

/* 
 * TMax - return maximum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmax(void)
{
    return ~(0x80 << 24);    //works

    return ~INT_MIN;        //works

}

int test_tmax(void)
{
    return 0x7FFFFFFF;
}

int main(void)
{
    printf("expected: %x\n", tmax());
    printf("actual  : %x\n", test_tmax());
}
