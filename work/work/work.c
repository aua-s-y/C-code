#include <stdio.h>

int main() {
    int numbers[10];
    int i;
    int max, min, sum;
    float average;

    // 输入10个数
    printf("请依次输入10个数：\n");
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &numbers[i]);
    }

    // 计算最大值和最小值
    max = numbers[0];
    min = numbers[0];
    for (i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // 计算平均值
    sum = 0;
    for (i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    average = (float)sum / 10;

    // 输出结果
    printf("最大值：%d\n", max);
    printf("最小值：%d\n", min);
    printf("平均值：%.2f\n", average);

    return 0;
}