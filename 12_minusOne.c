#include <stdio.h>
#include <limits.h>

/* 
 * minusOne - return a value of -1 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 2
 *   Rating: 1
 */
int minusOne(void)
{
    // does not work{
    // int answer = INT_MIN;
    // answer--;
    // return answer;
    // }

    int a = 0;
    return ~a;

    return ~1 + 1;

    return (1 << 31) >> 31;
}

int test_minusOne(void)
{
    return -1;
}

int main(void)
{
    printf("expected: %x\n", minusOne());
    printf("actual  : %x\n", test_minusOne());
}
