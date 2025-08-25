#include<stdio.h>
int main(int argc,char *argv[])
{
int i,n;
int sum=0;
printf("Enter an integer");
scanf("%i",&i);
int j=i;
while(i>0)
{
n=i%10;
i=i/10;
sum=sum*10+n;
}
if(j==sum)
printf("is a palindrome no.");
else
printf("is not a palindrome no.");
return 0;
}
