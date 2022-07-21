#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is even.");
    }
    else{
        printf("%d is odd.");
    }
    
}