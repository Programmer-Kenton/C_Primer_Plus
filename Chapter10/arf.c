//
// Created by Kenton on 2022/7/16.
//

/*处理数组的函数*/
#include <stdio.h>
#define SIZE 5

void show_array(const double ar[],int n);
void mult_array(double ar[],int n,double mult);

int main(void){
    double dip[SIZE] = {20.0,17.66,8.2,15.3,22.22};
    printf("The original dip array:\n");
    show_array(dip,SIZE);
    mult_array(dip,SIZE,2.5);
    printf("\nThe dip array after calling mult_array{}:\n");
    show_array(dip,SIZE);
}

/*显示数组的内容*/
// 使用cont=st并不是要求原数组是常量 而是该函数在处理数组时将其视为常量
void show_array(const double ar[],int n){
    int i;
    for (int i = 0; i < n; ++i){
        printf("%8.3f",ar[i]);
    }
    putchar("\n");
}

/*把数组的每个元素都乘以相同的数*/
void mult_array(double ar[],int n,double mult){
    int i;
    for (int i = 0; i < n; ++i){
        ar[i] *= mult;
    }
}

/**
* const的其他内容
 * double rates[5] = {88.99,100.12,59.45,183.11,340.5};
 * const double *pd = rates;   pd指向数组的首元素
 * *pd = 29.89 不允许  pd[2] = 222.22 不允许  rate[0] = 99.99 允许
 * 把pd所指向的double类型的值声明为const 这表明不能使用pf来更改它所指向的值
 * 无论是指针表示法还是数组表示法都不允许pd修改它所指向数据的值
 *
 * double rates[5] = {88.99,100.12,59.45,183.11,340.5};
 * const double locked[5] = {88.99,100.12,59.45,183.11,340.5};
 * double *pnc = rates; 有效
 * pnc = locked 无效 这个规则很合理 否则通过指针就能改变const数组中的数据
 *
 * double rates[5] = {88.99,100.12,59.45,183.11,340.5};
 * double * const pc = rates;  pc指向数组的开始
 * pc = &rates[2]; 不允许 因为指针被const修饰 不能指向别处
 * *pc = 92.99 允许
 *
 * 在创建指针时还可以使用两次const 该指针既不能更改它所指向的地址 也不能修改指向地址上的值
 * double rates[5] = {88.99,100.12,59.45,183.11,340.5};
 * const double *const oc = rates;
 * pc = &rates[2] 不允许
 * *pc = 92.99 不允许
 *
*/