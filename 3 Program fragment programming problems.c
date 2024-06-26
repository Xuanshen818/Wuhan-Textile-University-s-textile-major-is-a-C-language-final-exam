/*
程序片段编程题3.(23-24-2考试)C语言-二维数组04-D
【问题描述】计算并输出二维数组中主对角线上元素之和
【样例输入】
1 3 5
2 6 4
7 8 9
【样例输出】
16

#include <stdio.h>
int main(void)
int i,j, t[3][3],sum =0;for ( i= 0: i< 3;i++)
for( j = 0;j< 3; j++)scanf("%d",&t[i][j]);
*/

#include <stdio.h>

int main(void) {
    int i, j, t[3][3], sum = 0;

    // 输入二维数组的元素
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &t[i][j]);
        }
    }

    // 计算主对角线上的元素之和
    for (i = 0; i < 3; i++) {
        sum += t[i][i];
    }

    // 输出主对角线上的元素之和
    printf("%d\n",sum);

    return 0;
}
