//
// Created by Kenton on 2022/7/13.
//

#include <stdio.h>
#define SIZE 4

int main(void){
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;

    printf("value1=%d,value2=%d\n",value1,value2);
    for (int i = -1; i < i <= SIZE; ++i){
        for (int i = -1; i < 7; ++i){
            printf("value1=%d,value2=%d\n",value1,value2);
        }
        /*
          编译器不会检查数组下标是否越界 使用越界的数组下标会导致程序改变其他变量的值
          不同编译器运行该程序的结果不同
        */
        printf("address of arr[-1]:%p\n",&arr[-1]);
        printf("address of arr[4]:%p\n",&arr[4]);
        printf("address of value1:%p\n",&value1);
        printf("address of value2:%p\n",&value2);
    }
}