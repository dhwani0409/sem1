#include<stdio.h>

int main()
{
    float p,r,t,si;
    printf("enter the value of principle p \n");
    scanf("%f",&p);
    printf("enter the value of rate r \n");
    scanf("%f",&r);
    printf("enter the value of time t \n");
    scanf("%f",&t);

    //calculation of si
    si = (p*r*t)/100;
    printf("the simple interest si is %f",si);
    
    return 0;
    



}
