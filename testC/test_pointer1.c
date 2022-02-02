#include "stdio.h"
#include "stdlib.h"

int main(void){

 int x;
 x = 10;

 printf("「x」のアドレスは「 %p 」です\n",&x);
 printf("「x」の中身は「 %d 」です\n",x);

 return 0;
}