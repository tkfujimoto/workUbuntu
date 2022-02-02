#include "stdio.h"
#include "stdlib.h"

void TestFunction(double *pf);

int main(void){
 double x = 0.1;

 TestFunction(&x);

 printf("%lf\n",x);
}

void TestFunction(double *p){
 *p = *p + 1;
}
