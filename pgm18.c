#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(void)
{
    int a, b;
    printf("enter two integers:");
    scanf("%d %d", &a , &b);
    printf("before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after swapping : a = %d, b = %d\n", a, b);
    return 0;
}