//
// Created by Kenton on 2022/7/16.
//

/*指针变量的8种操作*/

#include <stdio.h>
int main(void){
    int urn[5] = {100,200,300,400,500};
    /**
     * 注意 地址应该和指针类型兼容 也就是说 不饿能把double类型的地址赋给指向int的指针
     * 至少要避免不明智的类型转换 C99/11已经强制不允许这样做了
     */
    int *ptr1,*ptr2,*ptr3;
    // 把一个地址赋值给指针
    ptr1 = urn;
    // 把一个地址赋值给指针
    ptr2 = &urn[2];

    printf("pointer value,dereference pointer,pointer address:\n");
    // &ptr1是指针ptr1的地址
    printf("ptr1 = %p,*ptr = %d,&ptr1 = %p\n",ptr1,*ptr1,&ptr1);

    // 指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    /**
     * 指针与整数相加
     * 可以使用+运算符把指针与整数相加或整数与指针相加 但是无论那种情况 整数都会和指针所指向类型的大小相乘(这里是int型也就是4个字节)
     * 然后把结果与初始值相加 因此ptr1+4和&urn[4]是等价的
     * 如果相加的结果超出初始指针指向的数组范围 计算结果则是未定义的 除非正好超过数组末尾第一个位置 C保证该指针有效
     */
    printf("ptr1 + 4 = %p,*(ptr1+4) = %d\n",ptr1 + 4,*(ptr1 + 4));

    //递增指针
    // 不难发现指针ptr1后移一个单位 就是在源地址上+4字节(因为Int) *ptr1指的是后移一个单位后指针ptr1所指向的指
    // 此外指向指针ptr1的指针&ptr1没有任何变化
    ptr1++;
    printf("\nvalues after --ptr1:\n");
    printf("ptr1 = %p,*ptr1 = %d,&ptr1 = %p\n",ptr1,*ptr1,&ptr1);

    // 递减指针
    printf("起始指向ptr2指针的指针 = %p\n",&ptr2);
    printf("起始的ptr2 = %p\n",ptr2);
    ptr2--;
    printf("\nvalues after --ptr2:\n");
    // 同理的不管ptr2的地址怎么改变 指向ptr2的指针&ptr2始终不变
    printf("ptr2 = %p,*ptr2 = %d,&ptr2 = %p\n",ptr2,*ptr2,&ptr2);

    // 恢复为初始值
    --ptr1;
    ++ptr2;
    printf("\nPointer reset to original values:\n");
    printf("ptr1 = %p,ptr2 = %p\n",ptr1,ptr2);

    // 一个指针减去另一个指针
    printf("\nsubtracting one pointer from another:\n");
    // ptr2 - ptr1 = 2  地址相差8字节  因为他们都是int型
    // 意思是两个指针所指向的元素相隔两个int而不是两个字节
    printf("ptr2 = %p,ptr1 = %p,ptr2 - ptr1 = %td\n",ptr2,ptr1,ptr2 - ptr1);

    // 一个指针减去一个整数
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p,ptr3 - 2 = %p\n",ptr3,ptr3 - 2);
    /**
     * 指针减去一个整数。指针必须是第一个运算对象 整数是第一个运算对象。
     * 该整数将乘以指针指向类型的大小 然后用初始地址减去乘积 所以ptr3 - 2和&urn[2]等价
     * 同样的如果详见的结果超出初始指针所指向数组的范围 计算结果是未定义的 除非正好超好数组末尾第一个位置 C保证指针有效
     */

    /**
     * 千万不要解引用未初始化的指针
     * int *pt;
     * *pt = 5; 严重的错误
     * 第二行的意思是把5存储到pt所指向的位置 但是pt未被初始化 其值是一个随机值 这可能会擦写数据或代码 导致程序奔溃
     * 切记:创建一个指针时 系统知识分配了存储指针本身的内存 但并未分配存储数据的内存 因此在使用指针之前 必须先用已分配的地址初始化它
     *
     */

    /**
     * 保护数组中的数据
     * 要选择是传递Int类型的值还是传递指向int类型的指针 通常都是直接传递数值 只有程序需要在函数中改变该数值时 才会传递指针
     * 对于数组别无选择 必须传递地址 因为这样效率高。如果一个函数按值传递数组 则必须分配足够的空间存储原数组的副本
     * 然后把数组所有的数据拷贝至寻的数组中 如果把数组的地址传递给函数 让函数直接处理原数组则效率更高
     *
     */
}