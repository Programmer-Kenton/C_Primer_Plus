//
// Created by Kenton on 2022/7/16.
//

#include <stdio.h>
#define SIZE 4

int main(void){
    short dates[SIZE];
    short *pti;
    double bills[SIZE];
    double *ptf;

    // 把数组地址赋给指针
    pti = dates;
    ptf = bills;

    printf("%23s %15s\n","short","double");
    for (int index = 0; index < SIZE; ++index){

        /** short占两个字节 double占三个字节
         * 在C语言中 指针+1指的是增加一个存储单元
         * 对于数组而言 这意味着把+1后的地址就是下一个元素的地址 而不是下一个字节的地址
         * 这也是必须申明指针所指向对象类的原因之一 只知道地址是不够的 计算机还要知道存储对象需要多少字节
         */
        // %p是以16进制显示指针的值
        printf("pointer + %d:%10p %10p\n",index,pti + index,ptf + index);
    }

    /**
     * 在指针前面使用…*运算符可以得到指针所指向对象的值
     * 指针+1 指针的值递增它所指向类型的大小 以字节为单位
     *
     *
     * 实际上C语言标准在描述数组表示法的时候确实借助了指针
     * 也就是说定义arr[n]的意思是*(arr+n) 可以认为*(arr+n)的意思是"到内存的ar位置 然后移动n个单元检索存储在哪里的值"
     *
     * 此外不要混淆 *(dates+2)和*dates+2
     * 间接运算符*的优先级高于+ 所以*date+2相当于*(date)+2;
     *   *(dates+2)-->dates数组第三个元素的值
     *   *date+2-->dates数组的第一个元素的值+2
     *
     */
}