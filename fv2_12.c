#include<stdio.h>

int main()
{
    int a,b,c,d,e,total;
    printf("enter the marks of a,b,c,d,e");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    if(total>450){
        printf("the grade A");
    } else if(total>400 && total<=450){
        printf("the grade B");
    } else if(total<=400 && total>350){
        printf("the grade is C");
    } else {
        printf("fail");
    }
    return 0;
}