#include "stdio.h"
#include "stdlib.h"

int main(void){

    int x;

    printf("数値を入力してください : ");
    scanf("%d",&x);

    switch(x){
        case 1:
            printf("xは1です\n");
            break;
        case 2:
            printf("xは2です\n");
            break;
        case 3:
            printf("xは3です\n");
            break;
        case 4:
            printf("xは4です\n");
            break;
        default:
            printf("xは1~4以外です\n");
            break;
    }

    return 0;
}
