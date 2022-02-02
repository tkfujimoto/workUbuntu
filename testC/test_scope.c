#include "stdio.h"
#include "stdlib.h"

void TestFunction(void);

int z = 1111;

int main(void){
    int x = 2222;

    {
        int y = 3333;
        printf("y = %d\n",y);
    }

    int y = 4444;

    printf("y = %d\n",y);
    printf("x = %d\n",x);
    TestFunction();
    printf("z = %d\n",z);

    return 0;
}

void TestFunction(void){
    int x = 5555;

    printf("x = %d\n",x);
    printf("z = %d\n",z);
}
