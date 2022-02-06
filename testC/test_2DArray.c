#include "stdio.h"
#include "stdlib.h"

int main(void){
    int array[3][5] = {{14,15,92,65,35},
                       {89,79,32,38,46},
                       {26,43,38,32,79}};

    printf("array[1][3] = %d\n",array[1][3]);

    return 0;
}
