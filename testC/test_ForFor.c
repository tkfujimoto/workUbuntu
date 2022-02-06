#include "stdio.h"
#include "stdlib.h"

int main(void){

 printf("外側のループ開始\n");
 for(int y = 1;y <= 8;y++){ //←小なり「＜」が全角になっているので半角に変更してく
  printf("内側のループ開始\n");

  for(int x = 1;x <= 4;x++){ //←小なり「＜」が全角になっているので半角に変更してく
   printf("%d-%d ",y,x);
  }

  printf("\n内側のループ終了\n");
 }
 printf("外側のループ終了\n");

 return 0;
}
