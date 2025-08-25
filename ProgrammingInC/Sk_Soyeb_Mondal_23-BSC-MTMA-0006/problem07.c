//WAP to check a given integer is a prime number

#include<stdio.h>
#include<math.h>
int main(int argc,char* argv[])
{
    int i,j;
    printf("enter a integer number= ");
    scanf("%i",&i);
    j=sqrt(i)/1;
    for(;j>0;j--)
    {
        if(i%j!=0)
            printf("it is a prime number");
    }
}
