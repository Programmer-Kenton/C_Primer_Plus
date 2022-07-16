//
// Created by Kenton on 2022/7/10.
//

// 部分初始化数组
#include <stdio.h>
#include <string.h>
#define SIZE 4

int main(void){
    int some_data[SIZE] = {1492,1066};
    int i;

    printf("%2s%14s\n","i","some_data[i]");
    for (int i = 0; i < SIZE; i++){
        printf("%2d%14d\n",i,some_data[i]);
    }

    /**
     * 编译器做的很好 当初始化列表中的值少于数组元素个数时 编译器会把剩余的数组全都初始化为0
     * 也就是说 如果不初始化数组 数组元素和未初始化的普通变量一样 存储的都是垃圾值
     * 但是如果部分初始化数组 剩余的元素就会被初始化为0
     */
}
