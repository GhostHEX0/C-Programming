#include<stdio.h>
int main()
{
    int a,b;
    int sum,sub,mul,div;
    printf("a");
    scanf("%d",&a);
    printf("b");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("a+b=%d",sum);
    printf("\na-b=%d",sub);
    printf("\na*b=%d",mul);
    printf("\na/b=%d",div);
    return 0;
}