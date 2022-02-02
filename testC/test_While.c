#include "stdio.h"
#include "stdlib.h"

int main(void){

    int x = 0;

    while(x < 5){ //←小なり「＜」が全角になっているので半角に変更してください
        printf("%d回目です\n",x);

        x++;
    }

    return 0;
}
