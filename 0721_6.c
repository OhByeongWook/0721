#include <stdio.h>

int main()
{
    int num;

    printf("입력값을 가지고 5의 배수인지 아닌지 판단하시오 : ");
    scanf("%d", &num);

    if(num % 5 == 0){
        printf("%d is a multiple of 5. ", num);
    }
    else{
        printf("%d is not a multiple of 5.", num);
    }
}