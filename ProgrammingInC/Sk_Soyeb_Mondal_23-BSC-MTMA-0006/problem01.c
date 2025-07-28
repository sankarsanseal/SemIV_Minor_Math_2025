//to print the sum and product of digits of an integer

#include<stdio.h>
int main(int agrc,char *argv[])
{
    int r=0,sum=0,product=1;
    int i;
    printf("enter the integer ");
    scanf("%i",&i);
    for(;i>0;i=i/10)
    {
        r=i%10;
        sum=sum+r;
        product=product*r;
    }
    printf("sum=%i ,product=%i",sum,product);
    return 0;
}
