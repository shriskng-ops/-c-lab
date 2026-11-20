#include<stdio.h>
  int main(void)
  {
    const float pi=3.14159f;
    float r,area,circumfarence;
    printf("enter radius:");
    scanf("%f",&r);
    area=pi*r*r;
    circumfarence=2*pi*r;
    printf("area=%.2f\n",area);
    printf("circumfarence=%.2f\n",circumfarence);
    return 0;
  }