#include <stdio.h>

int main()
{
    int your_height;

    printf("여러분의 키를 입력하세요. 단위는 cm입니다.\n");
    printf("나의 키 : ");
    scanf("%d", &your_height);
    
    printf("\n");
    printf("키가 %d이시군요.\n", your_height);
    
    if(your_height > 175){
        printf("키가 크시네요. \n");
    }
    else if(your_height == 175){
        printf("키가 평균키네요. \n");
    }
    else{
        printf("키가 작으시네요. \n");
    }
    return 0;
}