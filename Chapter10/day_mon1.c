//
// Created by Kenton on 2022/7/10.
//

#include <stdio.h>
#define MONTHS 12

// 打印每个月的天数
int main(void){
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (int index = 0; index < MONTHS; index++){
        printf("Month %2d has %2d days.\n",index+1,days[index]);
    }
    return 0;
}

/**
* 分析:
 *    这个程序还不够完善 每4年打错一个月份的天数
 *    如果要采用一年13个月的记法 只需修改#define 不用再程序中查找所有使用过数组大小的地方
*/