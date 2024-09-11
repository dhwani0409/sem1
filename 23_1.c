#include<stdio.h>

int power(int a, int b);
int main()
{
    int a,b;
    printf("enter the value of base a and power b\n");
    scanf("%d %d",&a,&b);
    printf("the value of %d raised to %d is %d",a,b,power(a,b));
    return 0;


}