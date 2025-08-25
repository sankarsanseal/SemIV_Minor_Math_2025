//reading a vector from a user

#include<stdio.h>
int main(int argc,char* argv[])
{
    int n;
    printf("Enter the number of elements of a given number= ");
    scanf("%d",&n);
    double real_vec[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of real_vec[%i]= ",i);
        scanf("%lf",&real_vec[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%lf\n",real_vec[i]);
    }
    return 0;
}
