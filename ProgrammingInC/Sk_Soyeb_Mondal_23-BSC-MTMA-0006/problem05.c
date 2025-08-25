//WAP to check a given integer is palindrome number

#include<stdio.h>
int main(int argc,char* argv[])
{
    int i,n;
    int sum=0;
    printf("enter a ineger number= ");
    scanf("%i",&i);
    int j=i;
    while(i>0)
    {
        n=i%10;
        i=i/10;
        sum=sum*10+n;
    }
    if(j==sum)
        printf("it is a palindrome number");
    else
        printf("it is not a palindrome number");
    return 0;
}
