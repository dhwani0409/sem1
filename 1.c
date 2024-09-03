#include<stdio.h>

int main()
{
    int maths,sci,eng,hindi,ss,total;
    float percent;

    printf("enter marks in maths");
    scanf("%d",&maths);
    printf("enter marks in sci");
    scanf("%d",&sci);
    printf("enter marks in eng");
    scanf("%d",&eng);
    printf("enter marks in hindi");
    scanf("%d",&hindi);
    printf("enter marks in ss");
    scanf("%d",&ss);
     
    //calculating total marks
    total = maths + eng + ss + sci + hindi;
    printf("total marks are %d",total);

    percent = total/5;
    printf("percent is %f",percent);
    return 0;
}