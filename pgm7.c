#include <stdio.h>
int main(void)
{
    int n, i;
    unsigned long long fact = 1;
    printf("enter a non-negative integer:");
    scanf("%d", &n);
    if (n < 0) {
        printf("factotial is not defined for negative numbers. \n");
        return 0;
    }
    for (i = 1; i <= n; i++)
        fact = fact * i;
    printf("%d! = %llu\n", n, fact);
    return 0;
}