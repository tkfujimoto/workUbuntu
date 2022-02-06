//省略されていたので自作した
#include "stdio.h"
#include "stdlib.h"

int main(void){
 int x;

 printf("点数を入力してください : ");
 scanf("%d",&x);

 if(x <= 100 && x >=75){ //条件式はここを変える
        printf("評価Aです\n");
 }else if(x <75 && x >=50){
        printf("評価Bです\n");
 }else if(x <50 && x >=25){
        printf("評価Cです\n");
} else {
        printf("評価Dです\n");
 }
 return 0;
}
