/*
程序片段编程题2.2023.12试题（一维数组）
【问题描述】输入一维数组，按升序排序，输出排序后的一维数组
【样例输入】
20 30 10 50 40
【样例输出】
10 20 30 40 50

#include <stdio.h>
int main(void)
{
int t[5], i, j, k, tmp;
for(=0; i<5; i++)
scanf("%d"，&t[i]);
#############这里是要填的内容##############
*/

#include <stdio.h>
int main(void) {
    int t[5], i, j, tmp;
    // 输入数组的元素
    for(i = 0; i < 5; i++) {
        scanf("%d", &t[i]);
    }
    // 使用冒泡排序对数组进行升序排序
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(t[j] > t[j + 1]) {
                // 交换 t[j] 和 t[j + 1]
                tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }
        }
    }
    // 输出排序后的数组
    for(i = 0; i < 5; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
    return 0;
}