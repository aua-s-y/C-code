#include <stdio.h>

int main() {
    int numbers[10];
    int i;
    int max, min, sum;
    float average;

    // ����10����
    printf("����������10������\n");
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &numbers[i]);
    }

    // �������ֵ����Сֵ
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

    // ����ƽ��ֵ
    sum = 0;
    for (i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    average = (float)sum / 10;

    // ������
    printf("���ֵ��%d\n", max);
    printf("��Сֵ��%d\n", min);
    printf("ƽ��ֵ��%.2f\n", average);

    return 0;
}