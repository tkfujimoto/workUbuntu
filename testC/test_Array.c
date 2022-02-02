#include "stdio.h"
#include "stdlib.h"

int main(void){

    int array[10] = {72,61,95,98,30,46,27,41,27,67};
    int value = 0;

    for(int x = 0;x < 10;x++){//←小なり「＜」が全角になっているので半角に変更してください
        value = value + array[x]; 
    }
    
    value = value / 10;

    printf("平均点は%dです\n",value);

    return 0;
}
