//
// Created by Kenton on 2022/7/10.
//

// 让编译器计算元素个数
#include <stdio.h>
int main(void){
    const int days[] = {31,28,31,30,31,30,31,31,30,31};
    int index;

    for (int index = 0; index < sizeof days / sizeof days[0]; ++index){
        printf("Month %2d has %d days\n",index+1,days[index]);
    }

    /**
     * 主要两点:
     *         1.如果初始化时省略括号中的数字 编译器会根据初始化列表中的项数来确定数组大小
     *         2.sizeof 运算符给出它的运算对象的大小(以字节为单位) 所以sizeof days是整个数组的大小
     *         sizeof day[0]是数组中一个元素的大小 整个数组的大小除以单个元素的大小就是数组元素的个数
     */
}