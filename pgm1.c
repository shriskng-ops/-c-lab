#include<stdio.h>
int main(void)
{
    float a,b;
    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("addition=%2f\n",a+b);
    printf("subtraction=%2f\n",a-b);
    printf("multiplication=%2f\n",a*b);
    if(b!=0)
        printf("division=%.2f\n",a/b);
    else
        printf("divition is not possible because the second number is zero.\n");
    return 0;    
}