/*-------------------if文コード------------------*/
#include "stdio.h"
#include "stdlib.h"

int main(void){
 int x;

 printf("数値を入力してください : ");
 scanf("%d",&x);

 if(x > 15){//条件式はここを変えるよ
        printf("True!\n");
        printf("xは15以上です\n");//頻繁に変更する
 }else{
  printf("False!\n");
        printf("xは15より小さいです\n");//頻繁に変更する
 }
    return 0;
}
