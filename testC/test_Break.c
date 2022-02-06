#include "stdio.h"
#include "stdlib.h"

int main(void){
    for(int i = 0;i < 5;i++){ //←小なり「＜」が全角になっているので半角に変更してく
        if(i == 2){
            break;
        }
        printf("%d回目です\n",i);
    }
    return 0;
}
