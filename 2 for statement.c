/*
2.(23-24-2考试)C语言-for语句07-D
【问题描述】输入正整数 n，输出1+1/3+1/5+1/7+…的前n项之和，精确到小数点
后飞位
【样例输入】
3
【样例输出】
1.533
*/

#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    printf("%.3f\n", sum);
    return 0;
}
