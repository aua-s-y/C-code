#include <stdio.h>

int main() {
    int numbers[10];
    int i, k;

    // 输入10个数
    printf("请输入10个数：\n");
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &numbers[i]);
    }

    // 输入要删除的位置
    printf("请输入要删除的位置 (0-9)：\n");
    scanf_s("%d", &k);

    // 删除指定位置的数据
    if (k < 0 || k >= 10) {
        printf("位置超出范围\n");
    }
    else {
        for (i = k; i < 9; i++) {
            numbers[i] = numbers[i + 1];
        }
        printf("位置%d的数据已删除\n", k);
    }

    // 输出删除后的数组
    printf("删除后的数组：\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}