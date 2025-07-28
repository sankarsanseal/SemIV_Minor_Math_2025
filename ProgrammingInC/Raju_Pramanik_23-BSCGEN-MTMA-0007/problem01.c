/*
WAP to print the sum and product of digits of an integer
*/
# include <stdio.h>
int main( int argc, char *argv[])
{int r=0,sum=0,product=1;
int i ;
printf ("enter an integer");
scanf ("%i",& i);
printf ("you entered % i",i);
for (; i>0; i=i/10)
{
r=i%10;
sum=sum+r;
product=product*r;
}
printf("sum%d,product%d",sum,product);
return 0 ;
}

