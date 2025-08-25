//WAP to calculate the factorial of a given integer

#include<stdio.h>
int main(int argc,char* argv[])
{
    long i;
    long long int fac=1;
    printf("enter a integer number= ");
    scanf("%ld",&i);
    while(i>0)
    {
        fac=fac*i;
        i=i-1;
    }
    printf("factorial of the given integer= %lld",fac);
}
