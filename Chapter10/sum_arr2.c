//
// Created by Kenton on 2022/7/16.
//

/**
* 函数要处理数组必须要知道何止开始、何时结束 除了sum_arr1.c的做法
 * 还可以传覅两个指针 第一个指针指明数组的开始处 第二个指针指明数组的结束处
*/

#include <stdio.h>
#define SIZE 10

/**
 * 使用指针算法
 * @param start 指明数组的开始处
 * @param end 指明数组的结束处
 * @return 返回数组元素值之和
 */
int sump(int *start,int *end){
    // 指针start开始指向marbles数组的首元素
    int total = 0;

    /**
     * 可以把循环体压缩成一行:  total += *start++;
     * 间接运算符和++的优先级相同 结合律是从右往左 所以start++先求值 然后才是*start
     */
    while (start < end){
        // 把数组元素的值加起来
        total += *start;
        // 让指针指向下一个地址
        // 因为start是指向int的指针 start递增1相当于递增int类型的大小 也就是4字节
        start++;
    }
    return total;
}

int main(void){
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    printf("marbles=%p\n",marbles);
    printf("marbles+10=%p",marbles+SIZE);
    // 因为下标从0开始 所以marbles+SIZE指向数组末尾的下一个位置 如果end指向数组的最后一个元素而不是数组末尾的下一个元素 则必须使用下面的代码
    // answer = sump(marbles,marbles + SIZE - 1);
    answer = sump(marbles,marbles + SIZE);
}