#include<stdio.h>

int main()
{
    float f,c;
    printf("enter the temperature in f \n");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("the value of temperature in centigrade is %f",c);
    return 0;
}