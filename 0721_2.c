#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    printf("Max Value program\n\n");
    printf("input number1 : ");
    scanf("%d", &num1);
    printf("input number2 : ");
    scanf("%d", &num2);
    printf("input number3 : ");
    scanf("%d", &num3);

    max = (num1 >= num2) ? num1 : num2 ;
    max = (max >= num3) ? max : num3;

    printf("==========Result==========\n");
    printf("three number of max : %d, %d, %d\n", num1, num2, num3);
    printf("max value : %d ", max);
}