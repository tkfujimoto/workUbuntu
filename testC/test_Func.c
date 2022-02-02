#include "stdio.h"
#include "stdlib.h"

double TestFunction(double x){
    double pi = 3.14159265;
    double y = 0;

    y = x * x * pi;

    return y;
}

int main(void){
    double x = 1;
    double y = 0;

    printf("半径を入力してください : ");
    scanf("%lf",&x);

    y = TestFunction(x);

    printf("半径%.2lf cmの円の面積は%.4lfです\n",x,y);

    return 0;
}
