#include<stdio.h>
#include<math.h>


int main(int argc, char * argv[]){

    double value, exponent;

    printf("Enter the value for finding the square value:");
    scanf("%lf",&value);
    printf("Enter the exponent value:");
    scanf("%lf", &exponent);


    double square_value = pow(value, exponent);

    printf("The square of %lf is %lf when raised to %lf", value, square_value, exponent);


return 0;
}
