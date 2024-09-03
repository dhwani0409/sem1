#include<stdio.h>

int main()
{
    int sec;
    float day,hour,min;
    sec = 31558150;
    day = sec/(24*3600);
    printf("the number of days are %f",day);
    hour=sec/3600;
    printf("the number of hours are %f",hour);
    min = sec/60;
    printf("the number of min are %f",min);
    return 0;
    
    
}