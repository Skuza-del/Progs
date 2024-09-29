/*
Author:Otieno Samwel Amos
Reg no: CT101/G/21435/24
Date: 29/09/2024
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float principal_amount, time, rate, simple_interest;
    printf("enter the principal_amount : ");
    scanf("%f", & principal_amount);
    printf("enter the time : ");
    scanf("%f", & time);
    printf("enter the rate : ");
    scanf("%f", & rate);
    simple_interest= principal_amount*time*rate/100;
    printf("simple_interest: %f", simple_interest);

    return 0;
}