//
// Created by Kenton on 2022/7/16.
//

/*
   数组元素之和
   如果编译器不支持%zd用%u或%lu代替
   sizeof是C语言的内置运算符，已字节为单位给出指定类型的大小。
   C99和C11提供%zd转换说明匹配sizeof的返回类型（即，size_t类型）。一些不支持C99和C11的编译器可用%u和%lu代替%zd。
*/

#include <stdio.h>
#define SIZE 10

int sum(int ar[],int n){
    int i;
    int total = 0;

    for (int i = 0; i < n; ++i){
        total += ar[i];
    }
    return total;
}

int main(void){
    int marbles[SIZE] = {20,14,5,39,4,16,19,26,31,20};
    long answer;

    answer = sum(marbles,SIZE);
    // 数组元素值总和
    printf("The total number of marbles is %ld\n",answer);
    // marbles数组的大小
    printf("The Size of marbles is %zd bytes\n",sizeof marbles);

    /**
     * marbles的大小是40个字节 因为marbles内含10和int类型的值 每个值占4个字节
     * 但是ar才8字节 这是因为ar并不是数组本身 它知识指向marbles数组首元素的指针 我们的系统中用8字节存储地址
     * 所以指针变量的大小是8字节 在其他系统可能不是8字节
     * 简而言之 marbles是一个数组 ar是一个指向marbles数组首元素的指针
     */
}