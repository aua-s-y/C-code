#include <stdio.h>

int main() {
    int numbers[10];
    int i, k;

    // ����10����
    printf("������10������\n");
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &numbers[i]);
    }

    // ����Ҫɾ����λ��
    printf("������Ҫɾ����λ�� (0-9)��\n");
    scanf_s("%d", &k);

    // ɾ��ָ��λ�õ�����
    if (k < 0 || k >= 10) {
        printf("λ�ó�����Χ\n");
    }
    else {
        for (i = k; i < 9; i++) {
            numbers[i] = numbers[i + 1];
        }
        printf("λ��%d��������ɾ��\n", k);
    }

    // ���ɾ���������
    printf("ɾ��������飺\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}