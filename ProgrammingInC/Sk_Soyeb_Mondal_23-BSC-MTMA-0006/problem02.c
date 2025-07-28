//to reverse a number

#include<stdio.h>
#include<math.h>
int main(int argc,char* argv[])
{
    int i,r,count=0,k,m,sum=0;
    printf("enter the integer =");
    scanf("%i",&i);
    int j=i;
    for(;i>0;i=i/10)
    {
        r=i%10;
        count++;
    }
    for(k=count;k>0;k--)
    {
        m=j%10;
        j=j/10;
        sum=sum+(m*pow(10,k-1));
    }
    printf("the reverse of the number =%i",sum);
    return 0;
}
