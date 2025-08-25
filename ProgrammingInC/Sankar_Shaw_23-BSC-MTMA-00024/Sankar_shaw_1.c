#include<stdio.h>
int main(int arge,char*argv)
{
int r=0,new_number=0;
int i;
printf("Enter an integer");
scanf("%i",& i);
printf("you entered %i/n",i);
for(;i>0;i=i/10)
{
r=i%10;
new_number=new_number*10+r;
}
printf("new_number %d,r%d",new_number,r);
return 0;
}
