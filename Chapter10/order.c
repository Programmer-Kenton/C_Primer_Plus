//
// Created by Kenton on 2022/7/16.
//

/*指针运算符中的优先级*/

#include <stdio.h>
int data[2] = {100,200};
int moredata[2] = {300,400};

int main(void){
    int *p1,*p2,*p3;

    p1 = p2 = data;
    p3 = moredata;
    printf("*p1 = %d,*p2 = %d,*p3 = %d\n",*p1,*p2,*p3);
    // 这里注意++p 和p++的区别 两种自增区别
    printf("*p1++ = %d,*++p2 = %d,(*p3)++ = %d\n",*p1++,*++p2,(*p3)++);
    // printf("*p3=%d\n",*p3); *p3=301
    printf("*p1 = %d,*p2 = %d,*p3 = %d\n",*p1,*p2,*p3);

    // 只有(*p3)++改变了数组元素的值 其他两个操作分别把p1和p2指向数组的下一个元素

    // 指针表示法和数组表示法: ar[i]和*(ar+1) 两个表达式是等价的
}