//to reverse the number

#include<stdio.h>
int main(int argc,char* argv[])
{
    int i,r,newnum=0;
    printf("enter the integer =");
    scanf("%i",&i);
    for(;i>0;i=i/10)
    {
        r=i%10;
        newnum=newnum*10+r;
    }
    printf("reverse of the number =%i",newnum);
    return 0;
}
