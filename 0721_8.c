#include <stdio.h>

int main()
{
    char grade;

    printf("여러분이 받은 학점을 입력하세요. \n");
    printf("나의 학점 : ");
    scanf("%c", &grade);
    switch(grade)
    {
        case 'A':
            printf("100점 >= 나의성적 >= 91");
            break;
        case 'B':
            printf("90점 >= 나의성적 >= 81");
            break;
        case 'C':
            printf("80점 >= 나의성적 >= 71");
            break;
        case 'D':
            printf("70점 >= 나의성적 >= 61");
            break;        
        default :
            printf("나의 성적은 60점 이하");
            
    }
    return 0;
}