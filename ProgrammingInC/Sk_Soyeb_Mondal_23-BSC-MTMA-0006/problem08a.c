//reading a vector from a user
//find the norm

#include<stdio.h>
#include<math.h>
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
    double sum=0,norm;
    for(int i=0;i<n;i++)
    {
        sum=sum+real_vec[i]*real_vec[i];
    }
    norm=sqrt(sum);
    printf("norm of the vector= %lf",norm);
    return 0;
}
