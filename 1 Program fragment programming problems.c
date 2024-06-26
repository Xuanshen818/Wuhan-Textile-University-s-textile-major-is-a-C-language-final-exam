/*程序片段编程题/1.(23-24-2考试)C语言-数12-D
【问题描述】函数定义:函数getLCM返回形参x形参y的最小公倍数
函数调用:调用函数getLCM，完成指定要求
【样例输入】
18 36
【样例输出】
36

#include <stdio.h>
// ②函数声明
int getLCM(int x, int y);
int main(void)
{
int a, b, c
scanf("%d%d",&a,&b);
// ③函数调用
// 调用函数 getLCM，计算a与b的最小公倍数，并存储在变量c中
  #########这里是需要填的内容#########
printf(“%d\n”, c);
return 0;
// ①函数定义
#######这里是需要填的内容##########
*/

#include <stdio.h>
// ②函数声明
int getLCM(int x, int y);
int main(void)
{
    int a, b, c;
    // 输入两个整数
    scanf("%d%d", &a, &b);
    // ③函数调用
    // 调用函数 getLCM，计算 a 与 b 的最小公倍数，并存储在变量 c 中
    c = getLCM(a, b);
    // 输出最小公倍数
    printf("%d\n", c);
    return 0;
}
// ①函数定义
int getLCM(int x, int y) {
    int a = x, b = y;
    // 使用欧几里得算法计算最大公约数（GCD）
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // 使用最大公约数计算最小公倍数
    return (x * y) / a;
}