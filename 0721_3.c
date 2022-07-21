#include <stdio.h>

int main()
{
    char ch1, ch2;
    int ch1_value;

    printf("lower_upper character.\n ");
    scanf("%c", &ch1);
    
    ch1_value = (int) ch1;

    ch2 = (ch1_value >= 97)? ch1_value - 32 : ch1_value + 32;

    printf("%c", ch2);
}