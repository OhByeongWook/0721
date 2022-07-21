#include <stdio.h>
#include <string.h>

int main()
{
    int v_num;
    char weekday1[20];

    printf("Enter your car number(4 digit) : ");
    scanf("%d", &v_num);

    if((v_num % 10 == 1)||(v_num % 10 == 6))
        strcpy(weekday1, "Monday");
        else if((v_num % 10 == 2 )||(v_num % 10 == 7))
            strcpy(weekday1, "Tuesday");
                else if((v_num % 10 == 3)||(v_num % 10 == 6))
                    strcpy(weekday1, "Wednesday");
                        else if((v_num % 10 == 4)||(v_num % 10 == 8))
                            strcpy(weekday1, "Thursday");
                                else
                                    strcpy(weekday1, "Friday");
    printf("\n\n==========Result==========\n");
    printf("%s",weekday1);
}