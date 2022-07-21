#include <stdio.h>
#define STD_H 175

int main()
{
    int your_height;

    printf("height input program. (cm)\n");
    printf("input height: ");
    scanf("%d", &your_height);
    printf("\n");
    printf("your height is %d.\n\n", your_height);

    if(your_height > STD_H){
        printf("your height is big.\n");
        printf("%d is big", your_height - STD_H);
    }
    else{
        printf("your height is small.\n");
        printf("%d is small", STD_H - your_height);

    }
}