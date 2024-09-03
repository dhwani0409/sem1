#include<stdio.h>

int main()
{
    int basicpay,medicalpay,bonus,grosssalary;
    printf("enter the amount of basic pay \n");
    scanf("%d",&basicpay);
    printf("enter the amout of medicalpay");
    scanf("%d",&medicalpay);
    printf("enter the amout of bonus");
    scanf("%d",&bonus);
     // calculating gross salary
     grosssalary = basicpay + medicalpay + bonus;
     printf("the gross salary is %d",grosssalary);
     return 0;
     

}