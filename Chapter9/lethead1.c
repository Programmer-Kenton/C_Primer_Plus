//
// Created by Kenton on 2022/7/9.
//

#include <stdio.h>
#define NAME "GIGATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40

/**
 * C库函数 int putchar(int char)把参数char指定的字符(一个无符号字符)写入到stdout中
 * 返回值:该函数以无符号char强制转换成int的形式写入的字符 如果发生错误则返回EOF
 */
void starbar(void){
    int count;
    for (int i = 0; count <= WIDTH; count++){
        putchar('*');
    }
    putchar('\n');
}

int main(){
    starbar();
    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);
    starbar();
    return 0;
}