//
// Created by Kenton on 2022/7/10.
//

// 使用指定初始化器

/**
* C99新增了一个特性:指定初始化器designated initializer
 * 利用该特性可以初始化指定的数组
 * 传统语法:   int arr[6] = {0,0,0,0,211};
 * 而C99规定 可以在初始化列表中使用带括号的下标指明待初始化的元素
 * int arr[6] = {[5] = 212}; 把arr[5]初始化为212
*/

#include <stdio.h>
#define MONTHS 12

/**
 * 指定初始化器的两个重要特性
 * 第一 如果指定初始化起后面有更多的值
 */
int main(void){
    int days[MONTHS] = {31,28,[4] = 31,30,31,[1] = 29};
    int i;

    for (int i = 0; i < MONTHS; ++i){
        printf("%2d %d\n",i,days[i]);

    }
}