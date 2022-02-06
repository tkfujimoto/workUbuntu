#include "stdio.h"
#include "stdlib.h"

int main(void){

 int x; //整数型変数
 int *p; //整数型ポインタ変数
 x = 10; //「x」に10を代入

 p = &x; //「x」のアドレスを「p」代入

 printf("「p」の中身は「 %p 」です\n",p);   //「p」の中身 = 「x」のアドレスを表示
 printf("「p」の格納先の中身は「 %d 」です\n",*p); //「p」の格納先の中身 = 「x」の中身を表示(10)

 printf("「x」のアドレスは「 %p 」です\n",&x);  //「x」のアドレスを表示
 printf("「x」の中身は「 %d 」です\n",x);   //「x」の中身を表示(10)

 return 0;
}
