#include<stdio.h>
 
 int main()
 {
    int base,height;
    float area;
    printf("enter the value of base \n");
    scanf("%d",&base);
    printf("enter the value of height \n");
    scanf("%d",&height);
    
    area = (base*height)/2;
    printf("area of triangle is %f",area);
    return 0;

 }